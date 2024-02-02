#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
vector<bool> vis;
int mx =0;
void Asearch(int k, int num,vector<vector<int>> dungeons){
    mx =max(mx,num);
    for(int i=0; i<dungeons.size(); i++){
        if(vis[i])continue;
        if(dungeons[i][0]>k)continue;
        vis[i] =true;
        Asearch(k-dungeons[i][1],num+1,dungeons);
        vis[i] =false;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    sort(dungeons.rbegin(),dungeons.rend());
    int n =dungeons.size();
    for(int i=0; i<n; i++)vis.push_back(false);
    Asearch(k,0,dungeons);
    return mx;
}