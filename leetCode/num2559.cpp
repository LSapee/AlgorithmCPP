class Solution {
public:
    char c[5] = {'a','e','i','o','u'};
    bool isVowelString(string s){
        char a = s[0];
        char b = s[s.size()-1];
        int cnt = 0;
        for(int i=0; i<5; i++){
            if(a==c[i])cnt++;
            if(b==c[i])cnt++;
        }
        if(cnt==2)return true;
        return false;
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        int m = queries.size();
        vector<int> arr(n,0);
        vector<int> ans(m,0);
        if(isVowelString(words[0]))arr[0]++;
        for(int i=1; i<n; i++){
            if(isVowelString(words[i]))arr[i]++;
            arr[i] += arr[i-1];
        }
        for(int i=0; i<m; i++){
            int x = queries[i][0];
            int y = queries[i][1];
            int xv = 0;
            if(x>0)xv = arr[x-1];
            int yv = arr[y];
            ans[i]= yv-xv;
        }
        return ans;
    }
};