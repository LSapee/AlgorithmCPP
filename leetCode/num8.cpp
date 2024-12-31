class Solution {
public:
    int MIN = -2147483648;
    int MAX = 2147483647;
    int n;
    string newS(string &s){
        for(int i=0; i<n; i++){
            if(s[i]==' ')continue;
            return s.substr(i,s.size()-i);
        }
        return s;
    }
    string makeString(string &s,int st){
        string temp;
        for(int i=st; i<n; i++){
            if(temp.size()==0 &&s[i]=='0')continue;
            if(s[i]<='9'&&s[i]>='0')temp+=s[i];
            else break;
        }
        if(temp.size()== 0)return "0";

        return temp;
    }

    int myAtoi(string s) {
        n = s.size();
        long long ans =0;
        if(n==0)return ans;
        s = newS(s);
        n = s.size();
        bool m = false;
        string newNumber = "";
        if(s[0]=='-'||s[0]=='+')m= true;
        if(!m){
            newNumber = makeString(s,0);
        }else{
            newNumber = makeString(s,1);
        }
        if(newNumber.size()>10){
            if(s[0]=='-')return MIN;
            else return MAX;
        }else if(newNumber.size()==10){
            if(stol(newNumber)>MAX){
                if(s[0]=='-')return MIN;
                else return MAX;
            }else{
                if(s[0]=='-')return 0-stoi(newNumber);
                else return stoi(newNumber);
            }
        }else{
            if(s[0]=='-')return 0-stoi(newNumber);
            else return stoi(newNumber);
        }
        return 0;
    }
};