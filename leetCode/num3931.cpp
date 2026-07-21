class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n =s.size();
        for(int i=0; i<n-1; i++){
            int a = s[i]-'0';
            int b = s[i+1]-'0';
            if(abs(a-b)>2)return false;
        }
        return true;
    }
};