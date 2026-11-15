class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(numOnes>=k)return k;
        if(numZeros>= k-numOnes)return numOnes;
        k -= numOnes;
        k -= numZeros;
        return numOnes-k;
    }
};