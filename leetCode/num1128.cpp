class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n =dominoes.size();
        int ans = 0;
        vector<int> vis(n,false);
        for(int i=0; i<n; i++){
            if(vis[i])continue;
            int x = dominoes[i][0];
            int y = dominoes[i][1];
            int cnt =1;
            for(int j=i+1; j<n; j++){
                int xx = dominoes[j][0];
                int yy = dominoes[j][1];
                if((x==xx&&y==yy)||(x==yy&&y==xx)){
                    vis[j]=true;
                    cnt++;
                }
            }
            for(int j=1; j<cnt; j++)ans+=j;
        }
        return ans;
    }
};