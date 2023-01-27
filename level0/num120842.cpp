//2차원으로 만들기

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int count =0;
    vector<vector<int>> answer;
    vector<int> a;
    for(int i=0; i<num_list.size(); ++i){
        a.push_back(num_list[i]);
        count++;
        if(count==n){
            count=0;
            answer.push_back(a);
            a.clear();
        }
    }
    return answer;
}