class Solution {
public:
    bool isArmstrong(int n) {
        int temp = n;
        vector<int> arr;
        int ans =0;
        while(temp>0){
            arr.push_back(temp%10);
            temp/=10;
        }
        int k =arr.size();
        for(int i=0; i<k; i++){
            int a =arr[i];
            for(int j=0; j<k-1; j++){
                a*=arr[i];
            }
            ans+=a;
        }
        return ans ==n;
    }
};