class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        int last =0;
        for(int i=0; i<n; i++){
            if(s[i]=='*')break;
            last++;
        }
        for(int i=last; i<n; i++){
            if(s[i]== '*')last--;
            else {
                s[last] = s[i];
                last++;
            }
        }
        s.resize(last);
        return s;
    }
};