class Solution {
public:
    void invert(string &temp){
        int l =temp.size();
        for(int i=0; i<l; i++)temp[i] = temp[i] == '0' ? '1':'0';
    }
    string reString(string temp){
        string t ="";
        for(int i=temp.size()-1; i>=0; i--)t+=temp[i];
        return t;
    }

    char findKthBit(int n, int k) {
        string s ="0";
        for(int i=1; i<n; i++){
            string temp = s;
            invert(temp);
            s = s+"1"+ reString(temp);
        }
        return s[k-1];
    }
};