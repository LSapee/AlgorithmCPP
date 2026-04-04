class Solution {
public:
    bool delS(string &s){
        int index =-1;
        int n =s.size();
        for(int i=0; i<n-1; i++){
            if(s[i]+32 == s[i+1] || s[i]-32 ==s[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1)return false;
        s.erase(index,2);
        return true;
    }

    string makeGood(string s) {
        while(delS(s))continue;
        return s;
    }
};