class Solution {
public:
    vector<string> arr;
    vector<bool> vis;
    vector<string> ans;
    int n;
    void start(string digits,string s,int k){
        if(k==n){
            ans.push_back(s);
            return ;
        }
        for(int i=k; i<n; i++){
            if(vis[i])continue;
            int m = arr[digits[i]-'0'].size();
            int cur = digits[i]-'0';
            vis[i] = true;
            for(int j=0; j<m; j++){
                start(digits,s+arr[cur][j],k+1);
            }
            vis[i] =false;
        }
    }

    vector<string> letterCombinations(string digits) {
        n= digits.size();
        vis.resize(10,false);
        arr = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        start(digits,"",0);
        return ans;
    }
};