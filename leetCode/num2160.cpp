class Solution {
public:
    int minimumSum(int num) {
        int ans = 99999;
        int n = 4;
        vector<int> arr;
        while(num>0){
            arr.push_back(num%10);
            num/=10;
        }
        sort(arr.begin(),arr.end());
        string temp1= to_string(arr[0])+to_string(arr[2]);
        string temp2= to_string(arr[1])+to_string(arr[3]);

        return stoi(temp1)+stoi(temp2);
    }
};