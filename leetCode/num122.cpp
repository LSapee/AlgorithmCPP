class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> stk;
        int ans = 0;
        int n = prices.size()-1;
        for(int i=n; i>=0; i--){
            if(!stk.empty()){
                if(prices[i]>stk.top()){
                    stk.pop(); stk.push(prices[i]);
                }else{
                    ans+=stk.top()-prices[i]; stk.pop();
                }
            }
            stk.push(prices[i]);
        }
        return ans;
    }
};