class Solution {
public:
    bool digitCount(string num) {
        vector<int> arr(10,0);
        int n =num.size();
        for(int i=0; i<n; i++)arr[num[i]-'0']++;
        for(int i=0; i<n; i++)if(num[i]-'0'!=arr[i])return false;
        return true;
    }
};