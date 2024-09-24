class Solution {
public:
    unordered_set<string> table;
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans =0;
        for(int i=0; i<arr1.size(); i++){
            string s = to_string(arr1[i]);
            string temp = "";
            for(int j=0; j<s.size(); j++){
                temp+=s[j];
                table.insert(temp);
            }
        }
        for(int i=0; i<arr2.size(); i++){
            string s = to_string(arr2[i]);
            string temp = "";
            if(ans>=s.size())continue;
            for(int j=0; j<s.size(); j++){
                temp+=s[j];
                if(table.find(temp)!=table.end()){
                    if(ans<temp.size())ans=temp.size();
                }
            }
        }
        return ans;
    }
};