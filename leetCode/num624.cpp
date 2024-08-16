class Solution {
public:
#define X first
#define Y second
    int n,mn,mx;
    vector<pair<int,int>> arr;
    int mxNum(vector<vector<int>>& arrays,int x){
        int k =INT_MIN;
        for(int i=0; i<n; i++){
            if(i==x)continue;
            if(arrays[i][arrays[i].size()-1]>k)k= arrays[i][arrays[i].size()-1];
        }
        return k;
    }
    int mnNum(vector<vector<int>>& arrays,int x){
        int k =INT_MAX;
        for(int i=0; i<n; i++){
            if(i==x)continue;
            if(arrays[i][0]<k)k= arrays[i][0];
        }
        return k;
    }
    int maxDistance(vector<vector<int>>& arrays) {
        n = arrays.size();
        arr.resize(n,{0,0});
        mx = mxNum(arrays,0);
        mn = mnNum(arrays,0);
        int ans = 0;
        for(int i=0; i<n; i++){
            if(arrays[i][0]==mn&&arrays[i][arrays[i].size()-1]==mx){
                ans = max(mxNum(arrays,i)-mn,mx-mnNum(arrays,i));
            }else ans = max(ans,max(arrays[i][arrays[i].size()-1]-mn,mx-arrays[i][0]));
        }
        return ans;

    }
};