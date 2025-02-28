class Solution {
public:
    bool check(char a){
        if(a=='a'||a=='A')return true;
        if(a=='e'||a=='E')return true;
        if(a=='i'||a=='I')return true;
        if(a=='o'||a=='O')return true;
        if(a=='u'||a=='U')return true;
        return false;
    }

    string toGoatLatin(string sentence) {
        int k = 1;
        string a = "ma";
        string a2 ="a";
        string ans ="";
        string temp = "";
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i]!=' ')temp+= sentence[i];
            else{
                if(check(temp[0])){
                    temp+= a;
                    ans+= temp;
                }else {
                    temp += temp[0]+a;
                    ans+= temp.substr(1,temp.size());
                }
                for(int j =0; j<k; j++){
                    ans+=a2;
                }
                k++;
                ans+= " ";
                temp="";
            }
        }
        if(check(temp[0])){
            temp+=a;
            ans+=temp;
        }else{
            temp+=temp[0]+a;
            ans+= temp.substr(1,temp.size());
        }
        for(int i=0; i<k; i++)ans+=a2;
        return ans;
    }
};