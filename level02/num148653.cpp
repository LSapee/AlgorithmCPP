#include <string>
#include <vector>

using namespace std;

int solution(int storey) {
    int answer = 0;
    while(storey>0){
        int k = storey%10;
        if(k>=6){
            answer+=10-k;
            storey+=10-k;
        }else if(k==5 && ((storey/10)%10)>=5){
            storey+=10-k;
            answer+=10-k;
        }else answer+=k;
        storey/=10;
    }
    return answer;
}