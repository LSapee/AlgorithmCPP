class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {
        int n =students.size();
        if(n==0)return 0;
        vector<unordered_set<int>> arr(101);
        for(int i=0; i<n; i++){
            arr[students[i][1]].insert(students[i][0]);
        }
        int ans =0;
        for(int i=0; i<=100; i++){
            ans= max(ans,(int)arr[i].size());
        }
        return ans;
    }
};