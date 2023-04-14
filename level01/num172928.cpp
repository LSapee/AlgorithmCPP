#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> park ={"SOO","OOO","OOO","OOO"};
    vector<string> routes ={"E 2","S 2","W 1"};
    vector<int> answer;
    queue<pair<int,int>> Q;
    for(int i=0; i<park.size(); i++){
        for(int j=0; j<park[0].size(); j++){
            if(park[i][j]=='S') Q.push({i,j});
        }
        if(!Q.empty()) break;
    }
    for(int i=0;i<routes.size(); i++){
        char c = routes[i][0];
        int a = stoi(routes[i].substr(2,3));
        pair<int,int> cur = Q.front(); Q.pop();
        int x = cur.X;
        int y = cur.Y;
        if(c=='E'){
            for(int j=0; j<a; j++){
                y+=1;
                if(y>=park[0].size()|| park[cur.X][y] =='X'){
                    y= cur.Y;
                    break;
                }
            }
        }else if(c=='S'){
            for(int j=0; j<a; j++){
                x+=1;
                if(x<0 || x>=park.size()|| park[x][cur.Y] =='X'){
                    x= cur.X;
                    break;
                }
            }
        }else if(c =='W'){
            for(int j=0; j<a; j++){
                y-=1;
                if(y<0 || y>=park[0].size()|| park[cur.X][y] =='X'){
                    y= cur.Y;
                    break;
                }
            }
        }else{
            for(int j=0; j<a; j++){
                x-=1;
                if(x<0 || x>=park.size()|| park[x][cur.Y] =='X'){
                    x= cur.X;
                    break;
                }
            }
        }
        if(cur.X !=x ||cur.Y !=y){
            Q.push({x,y});
        }else{
            Q.push({cur.X,cur.Y});
        }
    }
    answer.push_back(Q.front().X);
    answer.push_back(Q.front().Y);

}
