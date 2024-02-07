class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> stk;
        // 스택
        for(int i=0; i<n; i++){
            // i번째 날의 온도 = temp 
            int temp = temperatures[i];
            //stk에 i와 온도가 같더나 낮은 날만 모이게됨
            //stk에서 i번째보다 온도가 낮은 날들만 모여 있기에 pop하면서 온도가 올라가는 날까지 부족한 날짜를 계산 
            while(!stk.empty()&&temperatures[stk.top()]<temp){
                int prevDay = stk.top();stk.pop();
                ans[prevDay] = i-prevDay;
            }
            stk.push(i);
        }
        return ans;
    }
};