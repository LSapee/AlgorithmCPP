#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer(n);
    if(n>s) return {-1};
    int sum =0;
    for(int i=0; i<n; i++){
        answer[i] = s/n;
        sum+=answer[i];
    }
    if(s%n==0) return answer;
    int k = s%n;
    int st = n-1;
    while(k>0){
        answer[st]++;
        st--;
        k--;
        if(st==-1)st= n-1;
    }
    return answer;
}