class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int n =s.size();
        char m = s[0];
        char d = s[0];
        int st =1;
        while(m=='9'){
            m= s[st++];
            if(st>=n)break;
        }
        string maxNum ="";
        string minNum = "";
        for(int i=0 ; i<n; i++){
            if(s[i]==m &&m!='9'){
                maxNum+='9';
            }else{
                maxNum+=s[i];
            }
            if(s[i]==d){
                minNum+='0';
            }else{
                minNum+=s[i];
            }
        }
        return stoi(maxNum)-stoi(minNum);
    }
};