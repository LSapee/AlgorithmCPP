// 바뀐점.
// 기존의 코드 string완성 될때마다 유효성 검사를 위한 isV를 이용해서 ()알 맞게 닫혔는지 확인 후 set에 저장(중복제거용)
// 이후 set에서 꺼내서 배열로 다시 만드는 작업.

// 현재 코드 (를 최대 까지 가서 j가 i보다 작으면 닫는 방법으로 개선.

class Solution {
public:
    vector<string> ans;
    void back(int n, string s,int i,int j){
        if(s.size() == n*2){
            ans.push_back(s);
            return ;
        }
        if(i<n)back(n,s+"(",i+1,j);
        if(j<n&& j<i)back(n,s+")",i,j+1);
    }

    vector<string> generateParenthesis(int n) {
        back(n,"",0,0);
        return ans;
    }
};


// 2026.10.2 전에 풀었던 방법.
// class Solution {
// public:
//     int N;
//     set<string> st;
//     void isV(string temp){
//         stack<char> stk;
//         for(int i=0; i<N; i++){
//             if(temp[i]=='(')stk.push(temp[i]);
//             else{
//                 if(stk.empty())return ;
//                 else stk.pop();
//             }
//         }
//         if(stk.size()>0)return ;
//         if(st.find(temp)!=st.end())return ;
//         st.insert(temp);
//     }
//     void back(string temp,int a,int b){
//         if(temp.size()==N){
//             if(a!=b)return ;
//             isV(temp);
//             return ;
//         }
//         back(temp+"(",a+1,b);
//         back(temp+")",a,b+1);
//     }
//
//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         string temp ="";
//         N = n*2;
//         back(temp,0,0);
//         for(string s:st)ans.push_back(s);
//         return ans;
//     }
// };