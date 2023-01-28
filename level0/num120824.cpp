// 작수 홀수 개수
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int tw =0;
    int an =0;
    for (int a :num_list)
        if(a%2==0)
            tw+=1;
        else
            an+=1;
    answer.push_back(tw);
    answer.push_back(an);
    return answer;
}