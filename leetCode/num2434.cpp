class Solution {
public:
    string robotWithString(string s) {
        stack<char> stk;
        string ans ="";
        int n =s.size();
        vector<char> temp(n);
        temp[n-1] =s[n-1];
        for(int i=n-2; i>=0; i--) temp[i] = min(s[i],temp[i+1]);
        int st =0;
        while(st<n){
            stk.push(s[st]);
            while(!stk.empty() && (st == n-1 || temp[st+1]>=stk.top())){
                ans+=stk.top();
                stk.pop();
            }
            st++;
        }
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        return ans;
    }
};