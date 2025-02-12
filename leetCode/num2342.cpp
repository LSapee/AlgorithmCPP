class Solution {
public:
    vector<int> arr;
    int ans = -1;
    void sumNum(int k){
        int t= k;
        int a = 0;
        while(k>=10){
            a+=k%10;
            k/=10;
        }
        a+=k;
        if(arr[a]==0)arr[a] +=t;
        else{
            if(arr[a]+t>ans)ans = arr[a]+t;
        }
    }

    int maximumSum(vector<int>& nums) {
        int n =nums.size();
        arr.resize(100001,0);
        sort(nums.rbegin(),nums.rend());
        for(int i=0; i<n; i++)sumNum(nums[i]);
        return ans;
    }
};