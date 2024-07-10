class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(int i=0; i<logs.size(); i++){
            string s = logs[i];
            if(s.size()==3){
                if(s[0]=='.'&&s[1]=='.') cnt--;
                else cnt++;
                if(cnt <=0)cnt=0;
            }else if(s.size()==2){
                if(s[0]!='.')cnt++;
            }else cnt++;
        }
        return cnt;
    }
};