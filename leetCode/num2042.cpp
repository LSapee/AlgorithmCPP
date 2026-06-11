class Solution {
public:
    bool areNumbersAscending(string s) {
        int n =s.size();
        int cur =0;
        string temp = "";
        for(int i=0; i<n; i++){
            if(s[i]>='0' && s[i]<='9')temp+=s[i];
            else {
                if(temp.size() > 0){
                    int nxt = stoi(temp);
                    temp = "";
                    if(nxt>cur) cur =nxt;
                    else return false;
                }
            }
        }
        if(temp.size() > 0){
            int nxt = stoi(temp);
            temp = "";
            if(nxt>cur) cur =nxt;
            else return false;
        }
        return true;
    }
};