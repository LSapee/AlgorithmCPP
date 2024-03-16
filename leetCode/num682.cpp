class Solution {
public:
    int calPoints(vector<string>& operations) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> arr;
        for(int i=0; i<operations.size(); i++){
            if(operations[i][0] == '+'){
                arr.push_back(arr[arr.size()-1]+arr[arr.size()-2]);
            }else if(operations[i][0]=='D'){
                arr.push_back(arr[arr.size()-1]*2);
            }else if(operations[i][0]=='C'){
                arr.pop_back();
            }else{
                int k = stoi(operations[i]);
                arr.push_back(k);
            }
        }
        int ans =0;
        for(int i=0; i<arr.size(); i++){
            ans+=arr[i];
        }
        return ans;
    }
};