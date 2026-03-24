class Solution {
public:
    string arr[2] = {"0","1"};
    vector<string> ans;
    int N;
    void back(string s){
        if(s.size() == N){
            ans.push_back(s);
            return ;
        }
        for(int i=0; i<2; i++){
            if(i==0 && s[s.size()-1]=='0')continue;
            back(s+arr[i]);
        }
    }

    vector<string> validStrings(int n) {
        N=n;
        back("0");
        back("1");    
        return ans;
    }
};