class Solution {
public:
    string reformatNumber(string number) {
        int n =number.size();
        string s = "";
        string ans = "";
        for(int i=0; i<n; i++)if(number[i]>='0' && number[i]<='9')s+=number[i];
        n= s.size();
        int Size = 0;
        int t= 0;
        bool check =false;
        if(n<4) return s;
        if(n==4){
            for(int i=0; i<n; i++){
                ans+=s[i];
                if(ans.size()==2)ans+="-";
            }
            return ans;
        }
        for(int i=0; i<n; i++){
            ans+=s[i];
            Size++;
            if(Size == 3){
                if(i==n-1)break;
                ans+="-";
                t++;
                if(n-Size*t==4){
                    check = true;
                    break;
                }
                Size =0;
            }
        }
        if(check){
            Size =0;
            for(int i = n-4; i<n; i++){
                ans+= s[i];
                Size++;
                if(i==n-1)break;
                if(Size==2)ans+="-";
            }
        }
        return ans;
    }
};