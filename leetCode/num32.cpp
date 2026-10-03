
/*
 * 변경점  stack -> dp
 * 부족했던 부분 단순 ()()()()처리는 알겠었으나 else if 부분 답 보고 이해함.
 */

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int ans =0;
        vector<int> DP(n);
        for(int i=1; i<n; i++){
            if(s[i]==')'){
                if(s[i-1]=='('){ // 단순 ()()()()()()가 연속으로 얼마나 있는가 처리.
                    DP[i] = (i>=2? DP[i-2]:0) +2;
                }else if(i-DP[i-1]>0 && s[i-DP[i-1]-1]=='('){// ()()()<이건 위에서 처리 (()<1이거 처리()<2이거처리)<3이거처리하면서 앞에 3개까지 봄.
                    DP[i] = DP[i-1]+ ((i-DP[i-1])>=2?DP[i-DP[i-1]-2]:0)+2;
                }
                if(DP[i]>ans)ans=DP[i];
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         if(s.size()<2) return 0;
//         stack<int> stk;
//         int ans =0;
//         stk.push(-1);
//         for(int i=0; i<s.size(); i++){
//             if(s[i]=='(')stk.push(i);
//             else{
//                 stk.pop();
//                 if(stk.empty()){
//                     stk.push(i);
//                 }else{
//                     ans = max(ans,i-stk.top());
//                 }
//             }
//         }
//         return ans;
//     }
// };