class Solution {
public:
    string mk(queue<char> Q, char a){
        string ans = "";
        ans+=a;
        while(!Q.empty()){
            ans+=Q.front(); Q.pop();
        }
        return ans;
    }

    string larger(string &a, string &b){
        for(int i=0; i<a.size(); i++){
            if(a[i]>b[i])return b;
            else if(b[i]>a[i])return a;
            else continue;
        }
        return b;
    }

    string shortestBeautifulSubstring(string s, int k) {
        string ans = s + "1";
        queue<char> Q;
        int cnt = 0;
        for(char a: s){
            Q.push(a);
            if(a=='1')cnt++;
            while(!Q.empty() && cnt ==k){
                char f = Q.front(); Q.pop();
                if(f == '1'){
                    string temp = mk(Q,f);
                    ans = ans.size() > temp.size() ? temp : ans;
                    if(ans.size() == temp.size()) ans = larger(ans,temp);
                    cnt--;
                } 
            }
        }
        return ans == s+"1" ? "" : ans;
    }
};