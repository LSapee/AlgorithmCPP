//
// Created on 2023/06/06.
//
class Solution {
public:
    int lengthOfLastWord(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int count =0;
        for(int i=s.size()-1; i>=0; i--){
            if(count!=0 &&s[i]==' ')break;
            else if(s[i]!=' ') count++;
        }
        return count;
    }
};