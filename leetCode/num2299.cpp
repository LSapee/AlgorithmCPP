class Solution {
public:
    bool check(char a){
        string temp = "!@#$%^&*()-+";
        for(int i=0; i<temp.size(); i++) if(a == temp[i])return true;
        return false;
    }

    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8 )return false;
        vector<bool> checkList(4,false);
        
        for(int i=0; i<password.size(); i++){
            if(i>0) if(password[i] == password[i-1])return false;
            if(password[i]>='0' && password[i]<='9')checkList[0]= true;
            if(password[i]>='A' && password[i]<='Z')checkList[1]= true;
            if(password[i]>='a' && password[i]<='z')checkList[2]= true;
            if(check(password[i]))checkList[3]= true;
        }
        for(int i=0; i<4; i++)if(!checkList[i])return false;
        return true;
    }
};