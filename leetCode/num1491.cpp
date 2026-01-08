class Solution {
public:
    double average(vector<int>& salary) {
        int cnt =0;
        int n =salary.size();
        double ans = 0;
        sort(salary.begin(),salary.end());
        for(int i=1; i<n-1; i++){
            ans += (double)salary[i];
            cnt++;
        }
        return ans/cnt;
    }
};