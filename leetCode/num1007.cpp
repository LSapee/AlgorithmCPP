class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans =INT_MAX;
        vector<int> arr(7);
        int n =tops.size();
        unordered_map<int,int> topMp;
        unordered_map<int,int> bottomMp;
        for(int i=1; i<=6; i++){
            topMp[i]=0;
            bottomMp[i]=0;
        }
        for(int i=0; i<n; i++){
            if(tops[i]==bottoms[i]){
                arr[tops[i]]++;
            }else{
                arr[tops[i]]++;
                arr[bottoms[i]]++;
            }
            topMp[tops[i]]++;
            bottomMp[bottoms[i]]++;
        }
        for(int i=1; i<=6; i++){
            if(arr[i]==n){
                ans = min({ans,n-topMp[i],n-bottomMp[i]});
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};