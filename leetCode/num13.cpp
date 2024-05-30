class Solution {
public:
    int romanToInt(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans =0;
        map<char,int> mp = {
                {'I',1},
                {'V'     ,        5},
                {'X'    ,         10},
                {'L'   ,          50},
                {'C'  ,           100},
                {'D' ,            500},
                {'M',             1000}
        };
        for(int i=0; i<s.size(); i++){
            bool check =true;
            if(i+1==s.size()){
                ans += mp[s[i]];
                break;
            }
            if(s[i]=='I'){
                if(s[i+1]=='X'){
                    ans+=9;
                }else if(s[i+1]=='V'){
                    ans+=4;
                }else{
                    ans++;
                    check = false;
                }
            }else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    ans+=40;
                }else if(s[i+1]=='C'){
                    ans+=90;
                }else{
                    ans+=10;
                    check = false;
                }
            }else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    ans+=400;
                }else if(s[i+1]=='M'){
                    ans+=900;
                }else{
                    ans+=100;
                    check = false;
                }
            }else{
                ans+=mp[s[i]];
                check=false;
            }
            if(check)i++;
        }
        return ans;
    }
};