class Solution {
public:
    int maxFreqSum(string s) {
        int arr[26];
        int n =s.size();
        int aeiou =0;
        int bb = 0;
        for(int i=0; i<n; i++){
            arr[s[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(i+'a'== 'a') aeiou = max(aeiou,arr[i]);
            else if(i+'a'== 'e') aeiou = max(aeiou,arr[i]);
            else if(i+'a'== 'i') aeiou = max(aeiou,arr[i]);
            else if(i+'a'== 'o') aeiou = max(aeiou,arr[i]);
            else if(i+'a'== 'u') aeiou = max(aeiou,arr[i]);
            else bb= max(bb,arr[i]);
        }
        return bb+aeiou;
    }
};