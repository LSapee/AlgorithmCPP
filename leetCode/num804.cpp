class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[26] ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        int n = words.size();
        for(int i=0; i<n; i++){
            string temp = words[i];
            string k = "";
            for(int j=0; j<temp.size(); j++){
                k += arr[temp[j]-'a'];
            }
            if(st.find(k)==st.end())st.insert(k);
        }
        return st.size();
    }
};