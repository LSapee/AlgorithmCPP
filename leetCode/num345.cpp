class Solution {
public:
    string reverseVowels(string s) {
        int ed = s.size()-1;
        int st =0;
        unordered_set<char> ap;
        ap.insert('a');
        ap.insert('A');
        ap.insert('e');
        ap.insert('E');
        ap.insert('I');
        ap.insert('i');
        ap.insert('o');
        ap.insert('O');
        ap.insert('u');
        ap.insert('U');
        while(st<ed){
            if(ap.find(s[st])!=ap.end()){
                while(st<ed){
                    if(ap.find(s[ed])!=ap.end()){
                        swap(s[st],s[ed]);
                        ed--;
                        break;
                    }
                    ed--;
                }
            }
            st++;
        }
        return s;
    }
};