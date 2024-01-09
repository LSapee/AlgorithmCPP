#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

string colors[102];
int RGB[102][102];
int non[102][102];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    int n;
    string s;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>s;
        colors[i] =s;
    }
    queue<pair<int,int>> RGBQ;
    RGBQ.push({0,0});
    RGB[0][0] =1;
    char color = colors[0][0];
    int count =1;//색맹이 아닌 사람
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(RGB[i][j] != 1){
                RGBQ.push({i,j});
                color = colors[i][j];
                count++;
            }
            while(!RGBQ.empty()){
                pair<int,int> cur = RGBQ.front(); RGBQ.pop();
                for(int k=0; k<4; k++){
                    int x = cur.X+dx[k];
                    int y = cur.Y+dy[k];
                    if(x<0|| x>=n || y<0 || y>=n) continue;
                    if(RGB[x][y] == 1 || colors[x][y] != color) continue;
                    RGB[x][y] = 1;
                    RGBQ.push({x,y});
                }
            }
        }
    }
    queue<pair<int,int>> nonQ;
    nonQ.push({0,0});
    non[0][0] =1;
    char noncolor = colors[0][0];
    int ncount =1; //색맹인사람
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(non[i][j] != 1){
                nonQ.push({i,j});
                noncolor = colors[i][j];
                ncount++;
            }
            while(!nonQ.empty()){
                pair<int,int> cur = nonQ.front(); nonQ.pop();
                for(int k=0; k<4; k++){
                    int x = cur.X+dx[k];
                    int y = cur.Y+dy[k];
                    if(x<0|| x>=n || y<0 || y>=n) continue;
                    if(non[x][y] == 1) continue;
                    if(noncolor == 'R' && colors[x][y] == 'B') continue;
                    if(noncolor == 'G' && colors[x][y] == 'B') continue;
                    if(noncolor == 'B' && colors[x][y] != noncolor) continue;
                    non[x][y] = 1;
                    nonQ.push({x,y});
                }
            }
        }
    }
    cout<<count<<" "<<ncount;

    return 0;
}