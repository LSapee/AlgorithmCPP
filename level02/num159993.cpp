#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[101][101];
int arr2[101][101];
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> maps = {"LOOXS","OOOOX","OOOOO","OOOOO","EOOOO"};
    vector<string> maps2 = maps;
    queue<pair<int,int>> Q;
    pair<int,int> L;
    pair<int,int> E;
    for(int i=0; i<maps.size(); i++){
        for(int j=0; j<maps[i].size(); j++){
            if(maps[i][j]=='S'){
                Q.push({i,j});
            }else if(maps[i][j]=='L'){
                L = {i,j};
            }else if(maps[i][j]=='E'){
                E = {i,j};
            }
        }
    }
    vector<pair<int,int>> answers;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x=cur.X+dx[i];
            int y=cur.Y+dy[i];
            if(x<0||x>=maps.size()||y<0||y>=maps[0].size())continue;
            if(maps[x][y]=='X') continue;
            if(arr[x][y]>arr[cur.X][cur.Y])continue;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            Q.push({x,y});
            if(maps[x][y] == 'L'){
                while(!Q.empty()) Q.pop();
            }
            maps[x][y] = 'X';
        }
    }
    for(int i=0; i<maps2.size(); i++){
        for(int j=0; j<maps2[i].size(); j++){
            if(maps2[i][j]=='L'){
                Q.push({i,j});
                break;
            }
        }
        if(!Q.empty()) break;
    }
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x=cur.X+dx[i];
            int y=cur.Y+dy[i];
            if(x<0||x>=maps2.size()||y<0||y>=maps2[0].size())continue;
            if(maps2[x][y]=='X') continue;
            if(arr2[x][y]>arr2[cur.X][cur.Y])continue;
            arr2[x][y] = arr2[cur.X][cur.Y]+1;
            Q.push({x,y});
            if(maps2[x][y] == 'E'){
                while(!Q.empty()) Q.pop();
            }
            maps2[x][y] = 'X';
        }
    }
    int l = arr[L.X][L.Y];
    int e = arr2[E.X][E.Y];
    int answer =-1;
    if(l>0&&e>0){
        answer = l+e;
    }
    cout<<answer;
}