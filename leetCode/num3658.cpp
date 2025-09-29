class Solution {
public:
    int GCD(int sumOdd, int sumEven){
        if(sumEven == 0) return sumOdd;
        return GCD(sumEven,sumOdd%sumEven);
    }

    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        int st = 1;
        for(int i=0; i<n; i++){
            sumOdd+=st;
            sumEven+=st+1;
            st+=2;
        }
        int ans = GCD(sumOdd,sumEven);
        return ans;
    }
};