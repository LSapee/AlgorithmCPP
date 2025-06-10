class Solution {
public:
    int maxDifference(string s) {
        vector<int> arr(26);
        int n =s.size();
        for(int i=0; i<n; i++){
            arr[s[i]-'a']++;
        }
        int a =1;
        int b =9999;
        for(int i=0; i<26; i++){
            if(arr[i]==0)continue;
            if(arr[i]%2!=0){
                a = max(a,arr[i]);
            }else{
                b = min(b,arr[i]);
            }
        }
        return a-b;
    }
};