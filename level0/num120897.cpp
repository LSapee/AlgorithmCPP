//약수 구하기

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int a =1; a<=n; a++){
        if(n%a==0)
            answer.push_back(a);
    }
    return answer;
}