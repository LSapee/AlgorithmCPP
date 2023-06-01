#include <iostream>
#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int k = word1.size();
        int b = word2.size();
        string s ="";
        if(k>b){
            for(int i=0; i<b; i++){
                s+=word1[i];
                s+=word2[i];
            }
            for(int i=b;i<k; i++){
                s+=word1[i];
            }
        }else{
            for(int i=0; i<k; i++){
                s+=word1[i];
                s+=word2[i];
            }
            for(int i=k;i<b; i++){
                s+=word2[i];
            }
        }
        return s;
    }
};