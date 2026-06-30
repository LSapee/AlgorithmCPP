class Solution {
public:
    unordered_map<string,int> mp;
    void makeCh(char a,int k){
        string s = "";
        s+=a;
        for(int i=0; i<8; i++) mp[s+to_string(i+1)]=(k+i)%2;;
    }
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        for(int i=0; i<8; i++) makeCh('a'+i,i%2);
        return mp[coordinate1] == mp[coordinate2];        
    }
};