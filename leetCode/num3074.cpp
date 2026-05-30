class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum =0;
        int n = apple.size();
        for(int i=0; i<n; i++)sum+=apple[i];
        sort(capacity.rbegin(),capacity.rend());
        int ans =0;
        while(sum>0){
            sum-=capacity[ans];
            ans++;
        }
        return ans;
    }
};
