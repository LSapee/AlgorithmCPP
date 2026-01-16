class Solution {
    // 풀긴했는데 너무 느림.
    //
public:
    int n;
    int m;
    int wordSize;
    set<string> findWords;
    bool check(string s,unordered_map<string,int> mp){
        if(findWords.find(s)!=findWords.end())return true;
        int st = 0;
        while(st<m*wordSize){
            string temp = s.substr(st,wordSize);
            if(mp.find(temp)!= mp.end()){
                mp[temp]--;
                if(mp[temp]==0)mp.erase(temp);
            }else return false;
            st+=wordSize;
        }
        findWords.insert(s);
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        n= s.size();
        m = words.size();
        wordSize = words[0].size();
        unordered_map<string,int> mp;
        unordered_set<char> firstChar;
        for(int i=0; i<m; i++){
            mp[words[i]]++;
            firstChar.insert(words[i][0]);
        }

        for(int i=0; i<(n+1)-(m*wordSize); i++){
            if(firstChar.find(s[i])==firstChar.end())continue;
            if(check(s.substr(i,m*wordSize),mp))ans.push_back(i);
        }
        return ans;
    }
};