class Solution {
public:
    int firstUniqChar(string s) {
        int ans =-1;
        vector<int> vis(26,0);
        vector<int> visIndex(26,0);
        for(int i=0;i<s.size(); i++){
            if(!vis[s[i]-'a'])visIndex[s[i]-'a'] =i;
            vis[s[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(vis[i]==0||vis[i]>1)continue;
            if(ans==-1){
                ans = visIndex[i];
            }else{
                ans = min(ans,visIndex[i]);
            }
        }
        return ans;
    }
};