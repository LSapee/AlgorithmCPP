#include <bits/stdc++.h>
using namespace std;

int N,L;
vector<vector<int>> arr;
int ans =0;

void moveRows(int cur){
    vector<bool> vis(N,false);
    for(int i=0; i<N-1; i++){
        bool t = false;
        if(arr[cur][i+1] == arr[cur][i])continue;
        else if(arr[cur][i+1]==arr[cur][i]+1){
            // 현재위치 보다 높을때 i이전의 칸이 L칸만큼 같은지
            int temp = i-(L-1);
            // temp가 0보다 작다면 비교할 필요도 없이 못간다.
            if(temp<0)return ;
            while(temp<=i){
                if(arr[cur][temp]!=arr[cur][i] || vis[temp])return ;
                vis[temp]= true;
                temp++;
            }
        }else if(arr[cur][i+1]==arr[cur][i]-1){
            // 현재위치 보다 낮을 때 i 이후의 칸이 L칸만큼 큰지.
            int temp =i+L;
            if(temp>=N)return ;
            while(temp>=i+1){
                if(arr[cur][temp]!=arr[cur][i+1]|| vis[temp])return ;
                vis[temp]= true;
                temp--;
            }
        }else return ;
    }
    ans++;
}
void moveCols(int cur){
    vector<bool> vis(N,false);
    for(int i=0; i<N-1; i++){
        if(arr[i+1][cur] == arr[i][cur])continue;
        else if(arr[i+1][cur]==arr[i][cur]+1){
            // 현재위치 보다 높을때 i이전의 칸이 L칸만큼 같은지
            int temp = i-(L-1);
            // temp가 0보다 작다면 비교할 필요도 없이 못간다.
            if(temp<0)return ;
            while(temp<=i){
                if(arr[temp][cur]!=arr[temp][cur]|| vis[temp])return ;
                vis[temp]= true;
                temp++;
            }
        }else if(arr[i+1][cur]==arr[i][cur]-1){
            // 현재위치 보다 낮을 때 i 이후의 칸이 L칸만큼 큰지.
            int temp =i+L;
            if(temp>=N)return;
            while(temp>=i+1){
                if(arr[temp][cur]!=arr[i+1][cur]|| vis[temp])return ;
                vis[temp]= true;
                temp--;
            }
        }else return ;
    }
    ans++;
}


void input(){
    cin>>N>>L;
    for(int i=0; i<N; i++){
        vector<int> temp;
        for(int j=0; j<N; j++){
            int k; cin>>k;
            temp.push_back(k);
        }
        arr.push_back(temp);
    }
}

void solve(){
    for(int i=0; i<N; i++){
        moveRows(i);
        moveCols(i);
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    cout<<ans;
    return 0;
}