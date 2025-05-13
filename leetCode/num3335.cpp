class Solution {
public:
    const int MOD = 1e9+7;

    vector<int>goTrans(vector<int> &arr){
        vector<int> temp(26,0);
        for(int i=0; i<26; i++){
            if(i==25){
                temp[0]+=arr[i]%MOD;
                temp[1]+=arr[i]%MOD;
            }else temp[i+1]+=arr[i];
        }
        return temp;
    }

    int lengthAfterTransformations(string s, int t) {
        int n = s.size();
        int ans = 0;
        vector<int> arr(26,0);
        for(int i=0; i<n; i++)arr[s[i]-'a']++;
        for(int i=0; i<t; i++) arr = goTrans(arr);
        for(int i=0; i<26; i++){
            ans+=arr[i]%MOD;
            ans%=MOD;
        }
        return ans;
    }
};