class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();
        vector<bool> ans(q,false);
        vector<int> endNum(n,0);
        int end =0;
        for(int i=0; i<n; i++){
            end = max(end,i);
            while(end<n-1&&nums[end]%2!=nums[end+1]%2)end++;
            endNum[i] = end;
        }
        for(int i=0; i<q; i++){
            int st = queries[i][0];
            int ed = queries[i][1];
            ans[i] = ed <= endNum[st];
        }
        return ans;
    }
};
// 함수로 nums를 넘겨서 st~ed중에 nums[i]%2==nums[i-1]%2로 false반환 - > 시간초과
// 시작 번호에 따른 끝번호 지정 -> 통과 
// 이외 방법 - 이진탐색,접두사 합계, 