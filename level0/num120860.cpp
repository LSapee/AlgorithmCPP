//직사각형 넓이 구하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    sort(dots.begin(),dots.end());
    int w = abs(dots[0][0]-dots[2][0]);
    int h = abs(dots[1][1]-dots[0][1]);
    int answer = w*h;

    return answer;
}