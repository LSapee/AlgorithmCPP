class Solution {
public:
    int n;
    int cnt =0;
    bool check(vector<int>& nums,int st){
        vector<int> arr(101,0);
        for(int i=st; i<n; i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>1){
                cnt++;
                return true;
            }
        }
        return false;
    }

    int minimumOperations(vector<int>& nums) {
        n= nums.size();
        int st =0;
        bool ok = true;
        while(ok){
            ok = check(nums,st);
            if(!ok)break;
            st+=3;
        }
        return cnt;
    }
};