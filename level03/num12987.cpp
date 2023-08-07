#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0; i<A.size(); i++){
        for(int j=i; j<B.size(); j++){
            if(B[j]>A[i]){
                answer++;
                B[j]=0;
                break;
            }
        }
    }
    return answer;
}