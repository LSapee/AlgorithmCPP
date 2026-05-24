class Solution {
public:
    int totalDistance(string s) {
        pair<int,int> keyPos[26];
        vector<string> keys{"qwertyuiop","asdfghjkl","zxcvbnm"};
        for(int i=0; i<keys.size(); i++){
            for(int j=0; j<keys[i].size(); j++){
                keyPos[keys[i][j]-'a'] = {i,j};
            }
        }

        pair<int,int> cur = keyPos[0];
        int ans =0;
        int n = s.size();
        for(int i=0; i<n; i++){
            pair<int,int> temp = keyPos[s[i]-'a'];
            ans+= abs(cur.first - temp.first) + abs (cur.second-temp.second);
            cur = temp;
        }
        return ans;
    }
};
