class Solution {
public:
    vector<string> cellsInRange(string s) {
        int start = s[1]-'0';
        int end = s[4]-'0';
        char a = s[0];
        vector<string> ans;
        while(a<=s[3]){
            for(int i=start; i<=end; i++){
                string temp = "";
                temp+=a;
                temp+=to_string(i);
                ans.push_back(temp);
            }
            a++;
        }
        return ans;

    }
};