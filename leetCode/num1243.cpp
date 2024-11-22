class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        vector<int> ans = arr;
        bool ok = true;
        int n =arr.size();
        while(ok){
            ok = false;
            for(int i=1; i<n-1; i++){
                if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]){
                    ans[i]++;
                    ok = true;
                }else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                    ans[i]--;
                    ok= true;
                }
            }
            arr = ans;
        }
        return ans;
    }
};