class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        vector<int> arr(n+1,0);
        arr[0] =0;
        arr[1] =1;
        for(int i=2; i<=n; i++){
            int k =i/2;
            if(i%2==0){
                arr[i]= arr[k];
            }else{
                k++;
                arr[i] = arr[k-1]+arr[k];
            }
        }
        return *max_element(arr.begin(),arr.end());
    }
};