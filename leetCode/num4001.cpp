class Solution {
public:    
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>> ans;
        int n = series1.size();
        int m = series2.size();
        int st1 = 0;
        int st2 = 0;
        while(st1< n && st2<m){
            vector<int> temp;
            int timestamp = 0;
            if(series1[st1][0] > series2[st2][0]){
                timestamp = series2[st2][0];
                temp.push_back(timestamp);
                temp.push_back(series1[st1][1]+series2[st2][1]);
                st2++;
            }else if(series1[st1][0] == series2[st2][0]){
                temp.push_back(series1[st1][0]);
                temp.push_back(series1[st1][1]+series2[st2][1]);
                st1++;
                st2++;
            }else{
                timestamp = series1[st1][0];
                temp.push_back(timestamp);
                temp.push_back(series1[st1][1]+series2[st2][1]);
                st1++;
            }
            ans.push_back(temp);
        }
        while(st1<n){
            ans.push_back({series1[st1][0],series1[st1][1]});
            st1++;
        }
        while(st2<m){
            ans.push_back({series2[st2][0],series2[st2][1]});
            st2++;
        }
        return ans;
    }
};