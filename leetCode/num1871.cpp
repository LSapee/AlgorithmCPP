class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.size();
        vector<int> arr(n);
        vector<int> prefix(n);
        arr[0] =1;
        for(int i=0; i<minJump; i++)prefix[i] =1;
        for(int i=minJump; i<n; i++){
            int l = i-maxJump;
            int r = i-minJump;
            if(s[i]=='0'){
                int total = prefix[r]-(l<=0 ? 0:prefix[l-1]);
                arr[i] = (total !=0);
            }
            prefix[i]= prefix[i-1]+arr[i];
        }
        return arr[n-1];
    }
};