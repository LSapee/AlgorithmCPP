//최대값 만들기(1)
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(),numbers.end());
    int answer = numbers[numbers.size()-2]*numbers[numbers.size()-1];
    return answer;
}