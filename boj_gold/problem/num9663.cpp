#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr;
int ans;
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
void DFS(int st){
    if(st==N){
        ans++;
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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0; i<N; i++){
    vector<int> temp(N,0);
        arr.push_back(temp);
    }
    DFS(0);
    cout<<ans;
    return 0;
}