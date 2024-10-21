class Solution {
public:
    int back(string &s,int st,unordered_set<string> & uniQ){
        if(st==s.size())return 0;
        int cnt =0;
        for(int ed = st+1; ed<=s.size(); ed++){
            string ss = s.substr(st,ed-st);
            if(uniQ.find(ss)==uniQ.end()){
                uniQ.insert(ss);
                cnt = max(cnt,1+back(s,ed,uniQ));
                uniQ.erase(ss);
            }
        }
        return cnt;
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> uniQ;
        return back(s,0,uniQ);
    }
};
