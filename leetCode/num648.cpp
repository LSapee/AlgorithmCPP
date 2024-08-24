class Solution {
public:
    string check(vector<string>& dictionary, string temp){
        for(int i=0; i<dictionary.size(); i++){
            bool ok = true;
            if(dictionary[i][0]==temp[0]){
                for(int j=0; j<dictionary[i].size(); j++){
                    if(dictionary[i].size()>temp.size()||dictionary[i][j]!=temp[j])ok =false;
                }
                if(ok) return dictionary[i];
            }
        }
        return temp;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans = "";
        string temp = "";
        sort(dictionary.begin(),dictionary.end());
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i]==' '){
                string s = check(dictionary,temp);
                temp = "";
                ans +=s;
                ans+=" ";
                continue;
            }
            temp += sentence[i];
        }
        if(temp.size()!=0){
            ans+= check(dictionary,temp);
        }
        return ans;
    }
};