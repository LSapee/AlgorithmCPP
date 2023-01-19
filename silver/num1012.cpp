#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
//백준은 출력할때 "\n"붙여줘야하는지 꼭 확인하기!!!!!!!!!!!!!!
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    for(int t=0; t<n; t++){//테스트 케이스의 갯수
        int w,h,c;
//        w = 가로 h 세로
        cin>>w>>h>>c;
//        배열 초기화
        int arr[51][51] ={0,};

//       배추 심기
        for(int i=0; i<c; i++){
            int a,b;
            cin>>a>>b;
            arr[b][a] = 1;
        }

//      배추 군집 찾기
        int count =0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                queue<pair<int,int>> Q;
                if(arr[i][j]==1){
                    Q.push({i,j});
                    arr[i][j]=0;
                    count++;
                }
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int nxt =0; nxt<4; nxt++){
                        int x = cur.X+dx[nxt];
                        int y = cur.Y+dy[nxt];
                        if(x<0||x>=h||y<0||y>=w) continue;
                        if(arr[x][y]==0)continue;
                        arr[x][y]=0;
                        Q.push({x,y});
                    }
                }
            }
        }
//        확인용
//        for(int i=0; i<h; i++){
//            for(int j =0; j<w; j++){
//                cout<< arr[i][j]<<" ";
//            }
//            cout<<"\n";
//        }
        cout<<count<<"\n";
    }
}