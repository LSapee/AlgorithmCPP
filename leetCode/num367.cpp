class Solution {
public:
    // 내장 함수 사용
    bool isPerfectSquare(int num) {
        int k = (int)sqrt(num);
        if(k==sqrt(num))return true;
        return false;
    }
};
class Solution {
public:
    // 제곱근까지만 unsigned < 사용하는 것은 오버플로우 발생될 가능성 떄문에 사용
    bool isPerfectSquare(int num) {
        for(unsigned int i=1; i*i<=num; i++) if(i*i==num)return true;
        return false;
    }
};
