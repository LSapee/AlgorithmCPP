//문자열 밀기
#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer =-1;
    int len = A.size();
    int count =0;
    if(A.compare(B)==0){
        return 0;
    }
    while(count<len){
        count++;
        A = A[A.size()-1]+A;
        A.pop_back();
        if(A.compare(B)==0){
            answer = 1;
            break;
        }

    }
    if(answer ==1){
        answer =count;
    }
    return answer;
}