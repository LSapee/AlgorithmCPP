//중앙값 구하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(),array.end());
    int a = array.size()/2;
    answer = array[a];
    return answer;
}