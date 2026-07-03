class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        for(char a: s){
            if(a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' ||a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u')vowels.push_back(a);
        }
        string ans ="";
        sort(vowels.begin(),vowels.end());
        int i =0;
        for(char a : s){
            if(a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' ||a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u')ans+=vowels[i++];
            else ans+=a;
        }
        return ans;
    }
};