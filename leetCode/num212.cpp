class Solution {
public:
#define X first
#define Y second
    int n,m;
    int dx[4] ={0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    unordered_set<string> st;
    vector<vector<bool>> vis;
    bool ok;
    void dfs(vector<vector<char>>& board,int a, int b ,string temp){
        st.insert(temp);
        if(temp.size()==10)return ;
        for(int i=0; i<4; i++){
            int x = a+dx[i];
            int y = b+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(vis[x][y])continue;
            vis[x][y] = true;
            dfs(board,x,y,temp+board[x][y]);
            vis[x][y] = false;
        }
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        n = board.size();
        m = board[0].size();
        vis.resize(n,vector<bool>(m,false));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                string s = "";
                vis[i][j] =true;
                dfs(board,i,j,s+board[i][j]);
                vis[i][j]= false;
            }
        }
        vector<string> ans;
        for(auto word : words){
            if(st.find(word)!=st.end()){
                ans.push_back(word);
            }
        }
        return ans;
    }
};
\