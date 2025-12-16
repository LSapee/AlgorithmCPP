class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string temp = "";
        if(str1.size()<str2.size())swap(str1,str2);
        int n = str2.size();
        int m = str1.size();
        string ans = "";
        for(int i=0; i<n; i++){
            temp+=str2[i];
            int k =temp.size();
            bool ok = true;
            if(m%k!=0 || n%k!=0)continue;
            for(int j=0; j<m; j++){
                if(str1[j]!=temp[j%k]){
                    ok =false;
                    break;
                }
            }
            for(int j=0; j<n; j++){
                if(str2[j]!=temp[j%k]){
                    ok= false;
                    break;
                }
            }
            if(ok)ans=temp;

        }
        return ans;
    }
};