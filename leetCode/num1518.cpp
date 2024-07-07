class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int x = numBottles;
        int k = numBottles%numExchange;
        numBottles /= numExchange;
        while(k+numBottles>=numExchange){
            x+=numBottles;
            numBottles +=k;
            k = numBottles%numExchange;
            numBottles /= numExchange;
        }
        x+=numBottles;
        return x;
    }
};