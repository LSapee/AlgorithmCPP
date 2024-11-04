class Solution {
public:
    int n;
    int check(int &i, string &word){
        char target = word[i];
        int cnt = 1;
        while(i<n){
            i++;
            if(word[i]==target)cnt++;
            else break;
            if(cnt==9){
                i++;
                return cnt;
            }
        }
        return cnt;
    }

    string compressedString(string word) {
        string s = "";
        n=word.size();
        int i = 0;
        while(i<n){
            char c = word[i];
            int k = check(i,word);
            s += to_string(k)+c;
        }
        return s;
    }
};

