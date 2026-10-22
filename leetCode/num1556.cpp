class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        int N = s.size();
        string temp = "";
        string ans = "";
        for(int i=N-1; i>=0; i--){
            temp =s[i]+temp;
            if(temp.size() == 3){
                if(ans.size() != 0){
                    ans = temp + "."+ans;
                    temp ="";
                }else{
                    ans = temp;
                    temp="";
                }
            }
        }
        if(temp.size()>0){
            if(ans.size() != 0){
                ans = temp + "."+ans;
            }else{
                ans = temp;
            }
        }
        return ans;
    }
};