class Solution {
public:
    bool check(int a,int b,int c,int aa,int bb,int cc){
        if(abs(a)>aa)return false;
        if(abs(b)>bb)return false;
        if(abs(c)>cc)return false;
        return true;
    }

    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n= arr.size();
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j =i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(check(arr[i]-arr[j],arr[j]-arr[k],arr[i]-arr[k],a,b,c))ans++;
                }
            }
        }
        return ans;
    }
};