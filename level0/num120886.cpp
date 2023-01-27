// A로 B만들기
#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    int count =0;
    string s ="";
    for(int i=0; i<before.size(); ++i){
        for(int j=0; j<after.size(); ++j){
            if(before[i]==after[j]){
                count++;
                after[j] = '0';
                break;
            }
        }
    }
    if(count==before.size()){
        answer =1;
    }else{
        answer =0;
    }
    return answer;
}