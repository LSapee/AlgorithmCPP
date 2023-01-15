#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;
//아래 오른쪽 위 왼쪽
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int arr[502][502];
//지나간 자리
int clear[502][502];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j] - '0';
        }
        for (int i = 0; i < n; i++) {
//        배열 초기화
            fill(clear[i], clear[i] + m, -1);
        }
        queue<pair<int, int>> Q;
//    시작점
        Q.push({0, 0});
        clear[0][0] = 0;
        while (!Q.empty()) {
//        현재위치
            pair<int, int> cur = Q.front();
            Q.pop();
            for (int i = 0; i < 4; i++) {
                int x = cur.X + dx[i];
                int y = cur.Y + dy[i];
                if (x < 0 || x >= n || y < 0 || y >= m) continue;
                if (clear[x][y] >= 0||arr[x][y] != 1 ) continue;
                clear[x][y] = clear[cur.X][cur.Y] + 1;
                Q.push({x, y});
            }
        }

    }
//    출력용 찍어보기
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << clear[i][j] << " ";
//            }
//            cout << "\n";
//        }
    cout << clear[n - 1][m - 1] + 1;
}