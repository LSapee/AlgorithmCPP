class Solution {
public:
    int maxDiff(int num) {
        if(num<10){
            return 8;
        }
        string s= to_string(num);
        string ss = to_string(num);
        int n =s.size();
        int st = 0;
        char a = s[0];
        while(a=='9'&&st<n) a= s[st++];
        for(int i=0; i<n; i++){
            if(s[i]==a)s[i]='9';
        }
        char b = ss[0];
        bool ok = false;
        if(ss[0]!='1'){
            b = ss[0];
        }else{
            ok= true;
            b='1';
            st=1;
            while(b=='1' &&st<n){
                b = ss[st]=='1' ? '1' :ss[st];
                if(b=='0') b='1';
                st++;
                if(b!='1')break;
            }
        }
        if(ok&&b!='1'){
            for(int i=1; i<n; i++)if(ss[i]==b)ss[i]='0';
        }else{
            for(int i=0; i<n; i++)if(ss[i]==b)ss[i]='1';
        }
        cout<<s<<" "<<ss;
        return stoi(s)-stoi(ss);
    }
};
