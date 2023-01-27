//피자 나눠 먹기(2)
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pizza_p =6;
    int count =1;
    while(n>0){
        if(pizza_p%n>0){
            pizza_p+=6;
            count++;
        }else{
            break;
        }
    }
    answer = count;
    return answer;
}