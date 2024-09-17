class Solution {
public:
    unordered_map<string,int> mp;
    void check(string s){
        // st를 기준으로 ' '전까지 자를 생각
        int st =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                mp[s.substr(st,i-st)]++;
                // i는 띄어쓰기라 다음시작은 i다음부터
                st= i+1;
            }
        }
        // 마지막은 띄어쓰기가 없어서 추가못한 단어 추가
        mp[s.substr(st,s.size()-st)]++;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        check(s1);
        check(s2);
        vector<string> ans;
        for( auto a:mp)if(a.second<2)ans.push_back(a.first);
        return ans;
    }
};