class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        map<string,bool> check;
        for(int i=0; i<bannedWords.size(); i++) check[bannedWords[i]]= true;
        int cnt =0;
        for(int i=0; i<message.size(); i++){
            if(check[message[i]]==true)cnt++;
        }
        if(cnt>=2)return true;
        else return false;
    }
};