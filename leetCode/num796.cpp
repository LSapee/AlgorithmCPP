class Solution {
public:
    int n;
    bool check(queue<char> Q,string goal){
        for(int i=0; i<goal.size(); i++){
            char a = Q.front();Q.pop();
            if(goal[i]!=a)return false;
        }
        return true;
    }

    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        bool ans = false;
        n= s.size();
        queue<char> Q;
        for(int i=0; i<n; i++)Q.push(s[i]);
        ans = check(Q,goal);
        for(int i=0; i<n; i++){
            Q.push(Q.front());Q.pop();
            ans = check(Q,goal);
            if(ans)break;
        }
        return ans;
    }
};