#include <bits/stdc++.h>
using namespace std;

int N,M,K;
vector<string> board;
vector<vector<int>> BW;
vector<vector<int>> WB;
int ans =INT_MAX;
void input(){
    cin>>N>>M>>K;
    BW.resize(N+3,vector<int>(M+3,0));
    WB.resize(N+3,vector<int>(M+3,0));
    for(int i=0; i<N; i++){
        string s;cin>>s;
        board.push_back(s);
    }
    for(int i=0; i<N; i++){
        if(i%2==0){
            if(board[i][0] =='W'){
                WB[i][0] = 0;
                BW[i][0] = 1;
            }else{
                WB[i][0] = 1;
                BW[i][0] = 0;
            }
        }else{
            if(board[i][0] =='W'){
                WB[i][0] = 1;
                BW[i][0] = 0;
            }else{
                WB[i][0] = 0;
                BW[i][0] = 1;
            }
        }
    }
}
void solve(){
    for(int i=0; i<N; i++){
        bool isEven = i%2==0 ? true : false;
        for(int j =1; j<M; j++){
            // i가 짝수 일때
            if(isEven){
                if(j%2==0){ // j가 짝수일때
                    if(board[i][j]=='W'){
                        BW[i][j] = BW[i][j-1]+1;
                        WB[i][j] = WB[i][j-1];
                    }else{
                        WB[i][j] = WB[i][j-1]+1;
                        BW[i][j] = BW[i][j-1];
                    }
                }else{
                    if(board[i][j]=='W'){
                        WB[i][j] = WB[i][j-1]+1;
                        BW[i][j] = BW[i][j-1];
                    }else{
                        BW[i][j] = BW[i][j-1]+1;
                        WB[i][j] = WB[i][j-1];
                    }
                }
            }else{
                //i가 홀수 일때
                if(j%2==0){
                    if(board[i][j]=='W'){
                        WB[i][j] = WB[i][j-1]+1;
                        BW[i][j] = BW[i][j-1];
                    }else{
                        WB[i][j] = WB[i][j-1];
                        BW[i][j] = BW[i][j-1]+1;
                    }
                }else{
                    if(board[i][j]=='W'){
                        WB[i][j] = WB[i][j-1];
                        BW[i][j] = BW[i][j-1]+1;
                    }else{
                        WB[i][j] = WB[i][j-1]+1;
                        BW[i][j] = BW[i][j-1];
                    }
                }
            }
            if(j>=K){
                int temp = j-K;
                if(isEven){
                    if(temp%2==0){
                        if(board[i][temp]=='W'){
                            if(BW[i][j]>0)BW[i][j]--;
                        }else{
                            if(WB[i][j]>0)WB[i][j]--;
                        }
                    }else{
                        if(board[i][temp]=='W'){
                            if(WB[i][j]>0)WB[i][j]--;
                        }else{
                            if(BW[i][j]>0)BW[i][j]--;
                        }
                    }
                }else{
                    if(temp%2==0){
                        if(board[i][temp]=='W'){
                            if(WB[i][j]>0)WB[i][j]--;
                        }else{
                            if(BW[i][j]>0)BW[i][j]--;
                        }
                    }else{
                        if(board[i][temp]=='W'){
                            if(BW[i][j]>0) BW[i][j]--;
                        }else{
                            if(WB[i][j]>0) WB[i][j]--;
                        }
                    }
                }
            }
        }

    }
    for(int i= K-1; i<M; i++){// >
        int sum1 =0;
        int sum2 =0;
        for(int j =0; j<N; j++){
            sum1 += BW[j][i];
            sum2 += WB[j][i];
            if(j>=K-1){
                ans = min(ans,min(sum1,sum2));
                sum1-=BW[j-(K-1)][i];
                sum2-=WB[j-(K-1)][i];
            }
        }

    }
}
void outputTest(){
    cout<<"BW\n";
    for(int i=0; i<N; i++){
        for(int j =0; j<M; j++){
            cout<<BW[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"WB\n";
    for(int i=0; i<N; i++){
        for(int j =0; j<M; j++){
            cout<<WB[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
//    outputTest();
    cout<<ans;
}