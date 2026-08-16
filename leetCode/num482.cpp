class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int cnt =0;
        int n= s.size();
        for(int i=0; i<n; i++){
            if(s[i]!='-')cnt++;
        }
        int st = cnt%k == 0 ? k : cnt%k;
        string ans = "";
        string temp ="";
        for(int i=0; i<n; i++){
            if(s[i]!='-'){
                if(s[i]>='a' && s[i]<='z')temp+=(s[i]-32);
                else temp+=s[i];
            }
            if(ans.size()==0 && temp.size()==st){
                ans+=temp;
                temp ="";
            }
            if(temp.size()==k){
                ans+="-"+temp;
                temp="";
            }            
        }
        return ans;
    }
};