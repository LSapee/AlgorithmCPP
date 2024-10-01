class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if(k<=1)return true;
        unordered_map<int,int> mp;
        for(int i=0; i<arr.size(); i++) mp[(arr[i]%k+k)%k]++;
        for(int i=0; i<arr.size(); i++){
            int target = (arr[i]%k+k)%k;
            if(target ==0){
                if(mp[target]%2==1)return false;
            }else if(mp[target]!=mp[k-target]) return false;
        }
        return true;
    }
};