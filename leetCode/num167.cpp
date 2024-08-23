class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int st = 0;
        int ed = n-1;
        while(st<ed){
            if(numbers[st]+numbers[ed]>target){
                ed--;
            }else if(numbers[st]+numbers[ed]<target){
                st++;
            }else{
                ans.push_back(st+1);
                ans.push_back(ed+1);
                break;
            }
        }
        return ans;
    }
};