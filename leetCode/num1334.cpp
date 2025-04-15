class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<int> ans(n);// n번 도시에서 다른 도시를 몇개 갈 수 있는가
        vector<vector<int>> arr(n,vector<int>(n,INT_MAX));
        for(int i=0; i<n; i++)arr[i][i] = 0;
        for(int i=0; i<edges.size(); i++) {
            arr[edges[i][0]][edges[i][1]] = edges[i][2];
            arr[edges[i][1]][edges[i][0]] = edges[i][2];
        }
        for(int i=0; i<n; i++){
            for(int j =0; j<n; j++){
                if(i==j)continue;
                for(int k=0; k<n; k++){
                    if(j==k|| arr[i][k]==INT_MAX|| arr[j][i]==INT_MAX)continue;
                    arr[j][k] = min(arr[j][i]+arr[i][k],arr[j][k]);
                }
            }
        }
        for(int i=0; i<n; i++){
            int k =0;
            for(int j=0; j<n; j++){
                if(i==j)continue;
                if(arr[i][j]<=distanceThreshold)k++;
            }
            ans[i] =k;
        }
        int ak =0;
        int ansNum = ans[0];
        for(int i=1; i<n; i++){
            if(ans[i]<=ansNum){
                ak=i;
                ansNum=ans[i];
            }
        }
        return ak;
    }
};