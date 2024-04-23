#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] ={1,2,2,1,-1,-2,-2,-1};
int dy[8] ={2,1,-1,-2,-2,-1,1,2};

pair<int,int> makeNumberPair(string s){
    int a = s[0]-'a';
    int b = s[1]-'1';
    return {a,b};
}

int bfs(string s,string ss){
    int arr[8][8];
    fill(arr[0],arr[7]+8,-1);
    pair<int,int> st = makeNumberPair(s);
    pair<int,int> ed = makeNumberPair(ss);
    queue<pair<int,int>> Q;
    arr[st.X][st.Y] = 0;
    Q.push(st);
    int cnt=0;
    while(!Q.empty()){
        pair<int,int> cur =Q.front();Q.pop();
        for(int i=0; i<8; i++){
            int x = cur.X +dx[i];
            int y = cur.Y +dy[i];
            if(x<0||x>=8||y<0||y>=8)continue;
            if(arr[x][y]!=-1)continue;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }

    return arr[ed.X][ed.Y];
}
bool sameWord(string s,string ss){
    if(s[0]==ss[0]&&s[1]==ss[1])return true;
    return false;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s,ss;
    while(cin>>s>>ss){
        if(sameWord(s,ss)) { cout << "To get from " << s << " to " << ss << " takes 0 knight moves.\n"; continue;}
        int ans =bfs(s,ss);
        cout<< "To get from " << s << " to " << ss << " takes "<<ans<<" knight moves.\n";
    }
}