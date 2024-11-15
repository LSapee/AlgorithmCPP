class Solution {
public:
    int arr[26];
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0; i<magazine.size(); i++)arr[magazine[i]-'a']++;
        for(int j=0; j<ransomNote.size(); j++){
            arr[ransomNote[j]-'a']--;
            if(arr[ransomNote[j]-'a']<0)return false;
        }
        return true;
    }
};
//magazine에 들어가느 스펠링 카운팅 하여 ransomNote 스펠링을 제외 하였을때 -가되는게 없으면 T를 반환