class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        int n = boxTypes.size();
        vector<pair<int,int>> arr;
        for(int i=0; i<n; i++)arr.push_back({boxTypes[i][1],boxTypes[i][0]});
        sort(arr.rbegin(),arr.rend());
        for(int i=0; i<n; i++){
            if(truckSize >= arr[i].second){
                ans+= arr[i].second*arr[i].first;
                truckSize-= arr[i].second;
            }else{
                ans+= arr[i].first*truckSize;
                break;
            } 
            if(truckSize ==0)break;
        }
        return ans;
    }
};