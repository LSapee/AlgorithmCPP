class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans =0;
        int n =colors.size();
        deque<int> DQ;
        for(int i=0; i<n+k-1; i++){
            if(DQ.empty()) DQ.push_back(colors[i]);
            else if(DQ.back()!=colors[i%n])DQ.push_back(colors[i%n]);
            else{
                while(!DQ.empty())DQ.pop_back();
                DQ.push_back(colors[i%n]);
            }
            if(DQ.size()==k){
                ans++;
                DQ.pop_front();
            }
        }
        return ans;
    }
};