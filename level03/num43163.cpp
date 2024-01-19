#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#define X first
#define Y second
using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    int ok =0;
    int n = words.size();
    int m = begin.size();
    //타켓이 있는지 확인
    for(int i=0; i<n; i++)if(words[i].find(target) != string::npos) ok++;
    if(ok==0) return answer;
    //bfs 
    queue<pair<string,int>> Q;
    //방문 확인용 배열
    bool arr[n];
    fill(arr,arr+n,false);
    Q.push({begin,0});
    while(!Q.empty()){
        pair<string,int> cur = Q.front(); Q.pop();
        for(int i=0; i<n; i++){
            int cnt=0;
            if(arr[i])continue;
            for(int j=0; j<m; j++){
                if(cur.X[j]==words[i][j])cnt++;
            }
            if(cnt!=m-1)continue;
            if(words[i].compare(target)==0){
                return cur.Y+1;
            }
            arr[i] = true;
            Q.push({words[i],cur.Y+1});
        }
    }
    return 0;
}