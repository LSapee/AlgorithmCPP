class Solution {
public:
    int N;
    set<string> st;
    void isV(string temp){
        stack<char> stk;
        for(int i=0; i<N; i++){
            if(temp[i]=='(')stk.push(temp[i]);
            else{
                if(stk.empty())return ;
                else stk.pop();
            }
        }
        if(stk.size()>0)return ;
        if(st.find(temp)!=st.end())return ;
        st.insert(temp);
    }
    void back(string temp,int a,int b){
        if(temp.size()==N){
            if(a!=b)return ;
            isV(temp);
            return ;
        }
        back(temp+"(",a+1,b);
        back(temp+")",a,b+1);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp ="";
        N = n*2;
        back(temp,0,0);
        for(string s:st)ans.push_back(s);
        return ans;
    }
};