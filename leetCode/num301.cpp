
// 2Q로 변경. 굳이 k 변수를 사용하는 이유 물어보니 가장 기본적인 방법이라 그렇게 알려줬다는 설명.
// Q swap은 내부적으로 O(1)이라 물어봤더니 더 효율적이라고 알려주는.

class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        queue<string> Q,Q2;
        unordered_set<string> visited;
        Q.push(s);
        visited.insert(s); // 만들어짐 처리
        bool found = false;
        while (!Q.empty()) {
            string curr = Q.front();
            Q.pop();
            if (isValid(curr)) {// 올바른 괄호인지 확인
                ans.push_back(curr);
                found = true;
            }
            // 현재 레벨에서 정답이 하나라도 나왔다면, 더 이상 괄호를 지우는 파생(다음 레벨) 작업은 중단 큐에 남은 것만 확인.
            if (found) continue;
            for (int i = 0; i < curr.length(); i++) {
                if (curr[i] != '(' && curr[i] != ')') continue;
                string next_str = curr.substr(0, i) + curr.substr(i + 1);
                if (visited.find(next_str) == visited.end()) {
                    Q2.push(next_str);
                    visited.insert(next_str);
                }
            }
            if (found) break;
            if(Q.empty()) swap(Q,Q2);
        }

        return ans;
    }

private:
    bool isValid(string_view s) {
        int count = 0;
        for (char c : s) {
            if (c == '(') count++;
            else if (c == ')') count--;
            if (count < 0) return false;
        }
        return count == 0;
    }
};


// 제미나이가 알려준 방법.
// 전체 문자열에서 (또는 )일때 해당 문자열을 1개씩 줄여가는 방식 최대 문자열 25->24->23->22->21... 하다가 14에서 걸리면 나머지13~1은 검사 없이 14인것만 검사 후 ans에 넣어서 반환.

class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        queue<string> q;
        unordered_set<string> visited;
        q.push(s);
        visited.insert(s); // 만들어짐 처리
        bool found = false;
        while (!q.empty()) {
            int size = q.size();
            // 핵심: 큐에 들어있는 현재 레벨(같은 삭제 횟수)의 문자열만 정확히 끊어서 처리
            for (int k = 0; k < size; k++) {
                string curr = q.front();
                q.pop();
                if (isValid(curr)) {// 올바른 괄호인지 확인
                    ans.push_back(curr);
                    found = true;
                }
                // 현재 레벨에서 정답이 하나라도 나왔다면, 더 이상 괄호를 지우는 파생(다음 레벨) 작업은 중단 큐에 남은 것만 확인.
                if (found) continue;

                for (int i = 0; i < curr.length(); i++) {
                    if (curr[i] != '(' && curr[i] != ')') continue;
                    string next_str = curr.substr(0, i) + curr.substr(i + 1);
                    if (visited.find(next_str) == visited.end()) {
                        q.push(next_str);
                        visited.insert(next_str);
                    }
                }
            }
            if (found) break;
        }
        return ans;
    }

private:
    bool isValid(string_view s) {
        int count = 0;
        for (char c : s) {
            if (c == '(') count++;
            else if (c == ')') count--;
            if (count < 0) return false;
        }
        return count == 0;
    }
};
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