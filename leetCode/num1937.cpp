class Solution {
public:
#define ll long long
    long long maxPoints(vector<vector<int>>& points) {
        int n =points[0].size();
        vector<ll> arr(n);
        vector<ll> arr2(n);
        for(auto& row : points){
            ll mx = 0;
            for(int j=0; j<n; j++){
                mx = max(mx-1,arr[j]);
                arr2[j] =mx;
            }
            mx =0;
            for(int j=n-1; j>=0; j--){
                mx =max(mx-1,arr[j]);
                arr2[j] = max(arr2[j],mx)+row[j];
            }
            arr=arr2;
        }
        ll mxPoint = 0;
        for(int i=0; i<n; i++){
            mxPoint = max(mxPoint,arr[i]);
        }
        return mxPoint;
    }
};
