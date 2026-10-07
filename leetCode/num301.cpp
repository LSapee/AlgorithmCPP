
// 일단 최대 문자열이 최대 25개 이고 최대 만들어지는 괄호의 개수는 12개라서 백트래킹으로 해결.
// bfs 고려해볼 것이라는데...
class Solution {
public:
    vector<string> ans;
    unordered_set<string> st;
    int n;
    int mx=0; // 최소한 삭제하고 만들어지는 최대 ()의 개수.
    void delOpen(string &temp,int &cnt){
        while(temp.size() != 0 && temp[temp.size()-1] == '('){
            cnt--;
            temp.pop_back();
            if(cnt<mx)return ;
        }
        return ;
    }

    void back(string temp, string &s, int index,int cnt,int cnt2){
        if(index == n ){
            delOpen(temp,cnt);
            if(cnt==mx && cnt== cnt2)st.insert(temp);
            return ;
        }
        if(s[index] == '('){
            back(temp+s[index],s,index+1,cnt+1,cnt2);
            back(temp,s,index+1,cnt,cnt2);
        }else if(s[index]!=')' && s[index]!='(')back(temp+s[index],s,index+1,cnt,cnt2);
        else{
            if(cnt>cnt2){
                back(temp+s[index],s,index+1,cnt,cnt2+1);
                back(temp,s,index+1,cnt,cnt2);
            }else{
                back(temp,s,index+1,cnt,cnt2);
            }
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        n =s.size();
        int cnt =0;
        string temp ="";
        for(int i=0; i<n; i++){
            if(s[i]=='(')cnt++;
            else if(s[i]==')' && cnt>0){
                cnt--;
                mx++;
            }else if(s[i] !='(' && s[i]!=')'){
                temp+=s[i];
            }
        }
        if(mx == 0){
            ans.push_back(temp);
            return ans;
        }
        back("",s,0,0,0);
        for(auto a :st)ans.push_back(a);
        return ans;
    }
};