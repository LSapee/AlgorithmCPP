class Solution {
public:
    char kthCharacter(int k) {
        vector<int> ans;
        ans.push_back(0);
        int n = ans.size();
        while(n<k){
            for(int i=0; i<n; i++) ans.push_back((ans[i]+1)%26);
            n=ans.size();
        }

        return 'a'+ans[k-1];
    }
};