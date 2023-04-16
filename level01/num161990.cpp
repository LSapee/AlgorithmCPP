#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> wallpaper = {"..........", ".....#....", "......##..", "...##.....", "....#....."};
    vector<int> answer ={55,55,-55,-55};
    vector<int> x;
    vector<int> y;

    for(int i=0; i<wallpaper.size(); i++){
        for(int j=0; j< wallpaper[i].size(); j++){
            if(wallpaper[i][j]=='#'){
                answer[0] = min(answer[0],i);
                answer[1] = min(answer[1],j);
                answer[2] = max(answer[2],i+1);
                answer[3] = max(answer[3],j+1);
            }
        }
    }

}