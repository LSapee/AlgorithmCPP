//옷가게 할인 받기
#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if(price>=500000){
        price = price*0.8;
    }else if(price >= 300000){
        price = price*0.9;
    }else if(price >= 100000){
        price = price*0.95;
    }
    int answer = price;
    return answer;
}
