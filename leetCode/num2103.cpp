class Solution {
public:
    int countPoints(string rings) {
        vector<vector<int>> arr;
        int n = rings.size();
        arr.resize(10,vector<int>(3,0));
        for(int i=0;i<n; i+=2){
            int color = rings[i] == 'B' ? 0 :rings[i]=='G' ? 1: 2;
            int index = rings[i+1]-'0';
            arr[index][color]++;
        }
        int ans =0;
        for(int i=0; i<10; i++){
            if(arr[i][0]==0 ||arr[i][1]==0 ||arr[i][2]==0)continue;
            ans++;
        }
        return ans;
    }
};