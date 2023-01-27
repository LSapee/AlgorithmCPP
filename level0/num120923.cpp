//연속된 수의 합
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int st = total/num;
    int k = num/2;
    int end = 0;
    if(total%num==0){
        end = st+k;
        st = st-k;
    }else{
        end = st+k;
        st = st-k+1;
    }
    for(int i=st; i<=end; i++){
        answer.push_back(i);
    }
    sort(answer.begin(),answer.end());
    return answer;
}