// 치킨쿠폰
#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = chicken/10;
    int coupon =chicken/10 + chicken%10;
    while(coupon>9){
        answer += coupon/10;
        coupon = coupon/10 + coupon%10;
    }
    return answer;
}