#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int arr[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int main(){
    int n;
//    단지수
    cin>>n;
//    지도 설정하기
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int j=0;j<n; j++){
            int k = s[j]-'0';
            arr[i][j]= k;
        }
    }
//    for(int i=0; i<n; i++){
//        for(int j=0;j<n; j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    단지수를 위한 ncount  집수를 위한 카운트 count
    int count=0,ncount=0;
    vector<int> nc;
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++) {
            queue<pair<int, int>> Q;
//          단지의 시작 집
            if (arr[i][j] == 1) {
                Q.push({i, j});
                arr[i][j] = 0;
                count++;
                ncount++;
            }
            while (!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int nxt = 0; nxt < 4; nxt++) {
                    int x = cur.X + dx[nxt];
                    int y = cur.Y + dy[nxt];
                    if (x < 0 || x >= n || y < 0 || y >= n)continue;
                    if (arr[x][y] == 0)continue;
                    arr[x][y] = 0;
                    ncount++;
                    Q.push({x, y});
                }
            }
            if(ncount>0){
                nc.push_back(ncount);
                ncount =0;
            }
        }
    }
    sort(nc.begin(),nc.end());
    cout<<count<<"\n";
    for(int i=0;i<count; i++){
        cout<<nc[i]<<"\n";
    }
}