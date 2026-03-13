class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n =words.size();
        for(int i=0; i<n; i++)sort(words[i].begin(),words[i].end());
        sort(words.begin(),words.end());
        int ans =0;
        for(int i=1;i<n; i++){
            if(words[i-1] == words[i]){
                ans++;
                i++;
            }
        }
        return ans;
    }
};