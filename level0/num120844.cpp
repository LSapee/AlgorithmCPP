//배열 회전시키기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int a =0;
    if(direction.compare("right") ==0){
        a = numbers[numbers.size()-1];
        numbers.pop_back();
        numbers.insert(numbers.begin(),a);
    }else{
        a = numbers.front();
        numbers.push_back(a);
        numbers.erase(numbers.begin());
    }
    answer = numbers;
    return answer;
}
