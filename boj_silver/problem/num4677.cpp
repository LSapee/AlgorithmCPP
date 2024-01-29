#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    while(1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        vector<string> arr;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                queue<pair<int, int>> Q;
                if (arr[i][j] == '@') {
                    arr[i][j] = '*';
                    ans++;
                    Q.push({i, j});
                }
                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    for (int z = 0; z < 8; z++) {
                        int x = cur.X + dx[z];
                        int y = cur.Y + dy[z];
                        if (x < 0 || x >= n || y < 0 || y >= m)continue;
                        if (arr[x][y] == '*')continue;
                        arr[x][y] = '*';
                        Q.push({x, y});
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}