class Solution {
public:
    // arr초기화
    vector<vector<int>> arr;
    vector<vector<string>> ans;
    int N;
    void paint(int x,int y){
        //아래
        for(int i=x+1; i<N; i++)arr[i][y]++;
        //아래 우측 대각선
        for(int i=x+1,j=y+1; max(i,j)<N; i++,j++)arr[i][j]++;
        //아래 좌측 대각선
        for(int i=x+1,j=y-1; i<N&&j>=0; i++,j--)arr[i][j]++;
    }
    void paintRemove(int x,int y){
        //아래
        for(int i=x+1; i<N; i++)arr[i][y]--;
        //아래 우측 대각선
        for(int i=x+1,j=y+1; max(i,j)<N; i++,j++)arr[i][j]--;
        //아래 좌측 대각선
        for(int i=x+1,j=y-1; i<N&&j>=0; i++,j--)arr[i][j]--;
    }
    // 그저 String 만들뿐
    void addStringVector(){
        vector<string> Sarr;
        for(int i=0; i<N; i++){
            string S="";
            for(int j=0; j<N; j++){
                if(arr[i][j]==-1)S+='Q';
                else S+='.';
            }
            Sarr.push_back(S);
        }
        ans.push_back(Sarr);
    }
    void DFS(int st){
        if(st==N){
            addStringVector();
            return ;
        }
        for(int i=0; i<N; i++){
            if(arr[st][i]!=0)continue;
            arr[st][i] = -1;
            paint(st,i);
            DFS(st+1);
            arr[st][i] = 0;
            paintRemove(st,i);
        }

    }


    vector<vector<string>> solveNQueens(int n) {
        N=n;
        for(int i=0; i<n; i++){
            vector<int> temp(n,0);
            arr.push_back(temp);
        }
        DFS(0);
        return ans;
    }
};