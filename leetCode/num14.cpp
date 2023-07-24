class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s ="";
        int k =0;
        for(int i=0; i<strs[0].size(); i++){
            s += strs[0][i];
            for(int j =0; j<strs.size(); j++){
                string a = strs[j].substr(0,1+i);
                if(a.find(s) == string::npos){
                    return s.substr(0,s.size()-1);
                }
            }
        }
        return s;
    }
};