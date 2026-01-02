//class Solution {
//public:
//    int repeatedNTimes(vector<int>& nums) {
//        int n =nums.size();
//        sort(nums.begin(),nums.end());
//        for(int i=0; i<n-1; i++)if(nums[i]==nums[i+1])return nums[i];
//        return -1;
//    }
//};

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n =nums.size();
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            if(st.find(nums[i])==st.end())st.insert(nums[i]);
            else return nums[i];
        }
        return -1;
    }
};

// 수정
// 배열 정렬 -> unordered_set을 사용하는 방법으로 시간 복잡도 O(n log n) -> O(n)