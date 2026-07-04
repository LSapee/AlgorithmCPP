class Solution {
public:
    double trimMean(vector<int>& arr) {
        double ans =0.0;
        double fp = 0.05*arr.size();
        sort(arr.begin(),arr.end());
        int k = 0;
        for(int i=0+fp; i<arr.size()-fp; i++){
            ans+=arr[i];
            k++;
        }
        return ans/k;
    }
};