class Solution {
public:
    int secondHighest(string s) {
        vector<int> arr(10,0);
        for(int i=0; i<s.size(); i++){
            if(s[i]>='0'&&s[i]<='9')arr[s[i]-'0']++;
        }
        int cnt =0;
        for(int i=9; i>=0; i--){
            if(arr[i] != 0)cnt++;
            if(cnt==2)return i;
        }
        return -1;
    }
};