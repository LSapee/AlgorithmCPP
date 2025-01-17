class Solution {
public:
    int numberOfDays(int year, int month) {
        if(year%4==0&& month ==2){
            if(year%400==0)return 29;
            else if(year%100==0)return 28;
            return 29;
        }else if(month==2)return 28;
        if(month>7){
            if(month%2==0) return 31;
            else return 30;
        }else{
            if(month%2==0) return 30;
            else return 31;
        }
    }
};

//윤년 계산 법 -> 4로 나누어지는 해중에 400으로 나누어지면 윤년 100으로 나누어지면 윤년이 아니다.