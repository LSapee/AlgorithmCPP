#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> wallpaper = {"..........", ".....#....", "......##..", "...##.....", "....#....."};
    vector<int> answer;
    vector<int> x;
    vector<int> y;

    for(int i=0; i<wallpaper.size(); i++){
        for(int j=0; j< wallpaper[i].size(); j++){
            if(wallpaper[i][j]=='#'){
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    answer.push_back(x[0]);
    answer.push_back(y[0]);
    answer.push_back(x[x.size()-1]+1);
    answer.push_back(y[y.size()-1]+1);
//    cout<<x[0]<<" "<<y[0]<<"\n";
//    cout<<x[x.size()-1]+1<<" "<<y[y.size()-1]+1<<"\n";
//    for(int i=0;i<x.size(); i++){
//        cout<<x[i]<< " ";
//    }
//    cout<<"\n";
//    for(int i=0;i<y.size(); i++){
//        cout<<y[i]<< " ";
//    }

}