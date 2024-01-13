#include <string>
#include <vector>

using namespace std;
vector<vector<int>> answer;

void hanoi(int a, int b,int n){
    vector<int> tmp;
    if(n==1) {
        tmp.push_back(a);
        tmp.push_back(b);
        answer.push_back(tmp);
        return ;
    }
    hanoi(a,6-a-b,n-1);
    tmp.push_back(a);
    tmp.push_back(b);
    answer.push_back(tmp);
    hanoi(6-a-b,b,n-1);
}


vector<vector<int>> solution(int n) {
    hanoi(1,3,n);
    return answer;
}