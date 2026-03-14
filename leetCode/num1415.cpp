class Solution {
public:
    vector<string> ans;
    vector<string> abc;
    void back(int n,string s){
        if(s.size()==n){
            ans.push_back(s);
            return ;
        }
        for(int i=0; i<3; i++){
            if(s[s.size()-1]==abc[i][0])continue;
            back(n,s+abc[i]);
        }
    }

    string getHappyString(int n, int k) {
        abc = {"a","b","c"};
        for(int i=0; i<3; i++)back(n,abc[i]);
        return ans.size() <k ? "" : ans[k-1];
    }
};
