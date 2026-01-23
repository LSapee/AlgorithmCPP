class Solution {
public:
    unordered_map<char,int> tChars;
    unordered_map<char,int> sChars;
    bool check(){
        for(auto k : tChars) if(k.second > sChars[k.first])return false;
        return true;
    }
    void makeString(string &ans,deque<char> DQ){
        string temp = "";
        while(!DQ.empty()){
            temp+= DQ.front();
            DQ.pop_front();
        }
        if(ans.size()==0)ans = temp;
        else if(temp.size()<ans.size())ans = temp;
    }

    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        string ans = "";
        if(n<m)return ans;
        for(int i=0; i<m; i++)tChars[t[i]]++;
        deque<char> DQ;
        for(int i=0; i<n; i++){
            DQ.push_back(s[i]);
            sChars[s[i]]++;
            if(DQ.size()>=m){
                while(!DQ.empty() && check()){
                    if(ans.size()==0)makeString(ans,DQ);
                    char temp = DQ.front();
                    bool checkCur = check();
                    sChars[DQ.front()]--;
                    DQ.pop_front();
                    bool checkNxt = check();
                    if(checkCur && !checkNxt){
                        if(ans.size()>DQ.size()+1){
                            DQ.push_front(temp);
                            makeString(ans,DQ);
                            DQ.pop_front();
                        }
                    }
                }
            }
            if(ans.size() == m)return ans;
        }
        return ans;
    }
};