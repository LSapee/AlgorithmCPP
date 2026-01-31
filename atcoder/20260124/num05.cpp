#include <bits/stdc++.h>
using namespace std;

// 문제 자체는 좌표계에서 시계? 반시계 방향으로 회전하면서 A~B지점의 몹을 레이저로 쓸어버렸을때 최대 몇마리 잡을 수 있는가? 반시계 방향 또는 시계 방향으로 돌려서 많은거 선택하는거 같은데 구현을 못했음.

struct point{
    int x, y, index;
};

long long cross_product(point a, point b){
    return ((long long)a.x * b.y) - ((long long)a.y * b.x);
}

bool cmp(point a, point b){
    if (a.x >= 0 and b.x < 0) return true;
    if (a.x < 0 and b.x >= 0) return false;
    if (a.x == 0 and b.x == 0) return a.y > b.y;
    return cross_product(a, b) < 0;
}

int N, T;
point points[200005];
pair<int, int> which_point[200005];

void input(){
    cin>>N>>T;
    for (int i = 1;i <=N;i++){
        cin >> points[i].x >> points[i].y;
        points[i].index = i;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 정렬 X축을 기준으로 반시계 방향으로 돌아가는 순으로
    sort(points + 1, points + N + 1, cmp);
    for (int i = 1;i <= N;){
        int start = i;
        // i<=N 같은 방향으로 증가할때 i++
        while (i <= N and cross_product(points[start], points[i]) == 0 and ((points[start].x >= 0 and points[i].x >= 0) or (points[start].x < 0 and points[i].x < 0))){
            i++;
        }
        // 같은 방향 같은 선상 그룹화
        for (int j = start;j < i;j++){
            which_point[points[j].index] = {start, i - 1};
        }
    }
    for (int i = 1;i <= T;i++){
        int a, b;
        cin >> a >> b;
        if (which_point[a].first <= which_point[b].second){
            cout << which_point[b].second - which_point[a].first + 1 << '\n';
        }
        else{
            cout << (N - which_point[a].first + 1) + which_point[b].second << '\n';
        }
    }
    return 0;
}
