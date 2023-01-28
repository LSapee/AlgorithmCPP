//가장 큰 수 찾기

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int mx =0;
    int count =0;
    int index =0;
    for (int a : array){
        if(mx<a){
            mx =a;
            index = count;
        }
        count+=1;
    }
    answer.push_back(mx);
    answer.push_back(index);
    return answer;
}
