class Solution {
public:
    int n;
    vector<vector<string>> ans;
    vector<vector<string>> temp;
    vector<bool> vis;
    void check(string s,vector<string>& strs,int k){
        vector<int> arr(n,0);
        vector<string> strArr;
        vis[k] =true;
        strArr.push_back(s);
        sort(s.begin(),s.end());
        for(int i=k+1; i<n; i++){
            if(s.size()!=strs[i].size())continue;
            int a=0;
            string p = strs[i];
            sort(p.begin(),p.end());
            for(int j=0; j<s.size(); j++){
                if(s[j]==p[j])a++;
            }
            if(a==s.size()){
                strArr.push_back(strs[i]);
                vis[i] =true;
            }
        }
        ans.push_back(strArr);
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        n = strs.size();
        vis.resize(n,false);
        if(n<=1) {
            ans.push_back(strs);
            return ans;
        }
        for(int i=0; i<n; i++){
            if(vis[i])continue;
            check(strs[i],strs,i);
        }
        return ans;
    }
};