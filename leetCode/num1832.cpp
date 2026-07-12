class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);
        int cnt =0;
        for(char a: sentence){
            if(arr[a-'a']==0) cnt++;
            arr[a-'a']++;
            if(cnt==26)return true;
        }
        return false;
    }
};