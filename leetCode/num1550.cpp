class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3)return false;
        int sum =0;
        if(arr[0]%2!=0)sum++;
        if(arr[1]%2!=0)sum++;
        for(int i=2; i<arr.size(); i++){
            if(arr[i]%2!=0)sum++;
            if(sum==3)return true;
            if(arr[i-2]%2!=0)sum--;
        }
        return false;
    }
};