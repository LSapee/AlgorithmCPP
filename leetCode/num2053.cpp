class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        vector<string> sArr;
        for(int i=0; i<arr.size(); i++)mp[arr[i]]++;
        for(int i=0; i<arr.size(); i++)if(mp[arr[i]]==1)sArr.push_back(arr[i]);
        if(k>sArr.size())return "";
        return sArr[k-1];
    }
};