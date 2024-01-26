#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int st = left/n;
    st++;
    int end = right/n;
    end++;
    for(int i=st; i<=end; i++){
        int k = left%n;
        int kk = right%n+1;
        for(int j=1; j<=n; j++){
            if(i==st&&j<=k)continue;
            if(i==end&&j>kk)break;
            if(j<i) answer.push_back(i);
            else answer.push_back(j);
        }
    }
    return answer;
}
//