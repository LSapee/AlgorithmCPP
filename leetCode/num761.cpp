class Solution {
public:
    string makeLargestSpecial(string s) {
        int n =s.size();
        vector<string> sArr;
        string ans ="";
        int b = 0;
        int st =0;
        for(int i=0; i<n; i++){
            if(s[i]=='1')b++;
            else b--;
            if(b==0){
                string cur = s.substr(st+1,i-(st+1));
                string S = "1"+ makeLargestSpecial(cur)+"0";
                sArr.push_back(S);
                st = i+1;
            }
        }
        sort(sArr.begin(),sArr.end(),greater<string>());
        for(auto a:sArr)ans+=a;
        return ans;
    }
};