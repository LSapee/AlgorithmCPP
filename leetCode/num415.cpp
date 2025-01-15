class Solution {
public:
    string sumString(string a,string b){
        string s ="";
        bool ok = false;
        for(int i=a.size()-1; i>=0; i--){
            int k =(a[i]-'0')+ (b[i]-'0');
            if(ok)k++;
            if(k>=10){
                ok=true;
                s = to_string(k%10)+s;
            }else{
                ok= false;
                s = to_string(k)+s;
            }
        }
        if(ok)s = "1"+s;
        return s;
    }

    string addStrings(string num1, string num2) {
        int a = num1.size();
        int b = num2.size();
        if(b>a){
            swap(a,b);
            swap(num1,num2);
        }
        int k = a-b;
        while(k--) num2='0'+num2;
        string s = sumString(num1,num2);
        return s;
    }
};