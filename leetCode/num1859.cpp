class Solution {
public:
    string sortSentence(string s) {
        int n =s.size();
        string ans ="";
        vector<string> arrS(10,"");
        string temp = "";
        int mx =0;
        for(int i=0; i<n; i++){
            if(s[i] <='9' && s[i]>='0'){
                arrS[s[i]-'0'] = temp;
                temp ="";
                mx=max(mx,s[i]-'0');
                continue;
            }
            if(s[i] == ' ')continue;
            temp+=s[i];
        }
        for(int i=1; i<=mx; i++){
            if(i==mx){
                ans +=arrS[i];
                break;
            }
            ans+= arrS[i]+" ";
        }
        return ans;
    }
};