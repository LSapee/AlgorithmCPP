class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans =0;
        for(int a : hours){
            if(a>=target)ans++;
        }
        return ans;
    }
};