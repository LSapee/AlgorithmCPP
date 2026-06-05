class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int> arr(26,0);
        int t= 0;
        int n = releaseTimes.size();
        for(int i=0; i<n; i++){
            arr[keysPressed[i]-'a'] = max(releaseTimes[i]-t, arr[keysPressed[i]-'a']);
            t = releaseTimes[i];
        }
        char ans = keysPressed[0];
        int mxTime =0;
        for(int i=25; i>=0; i--){
            if(arr[i]>mxTime){
                mxTime = arr[i];
                ans = i+'a';
            }
        }
        return ans;
    }
};