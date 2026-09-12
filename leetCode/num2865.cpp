class Solution {
// 단조 스택으로 해결하면 시간 복잡도가 대폭 감소 한다는데.  II 문제가 단조 스택이 필요하다 하기에 II에서 단조스택 사용해볼거라 일단 넘겨보기.
public:
    int n;
    long long maximumSumOfHeights(vector<int>& heights) {
        n = heights.size();
        long long ans = 0;
        for(int i=0; i<n; i++){
            long long lowCur = 1LL*heights[i];
            long long highCur = 1LL*heights[i];
            long long curSum = 1LL*heights[i];
            for(int j=i-1; j>=0; j--){
                lowCur = min(lowCur,(long long)heights[j]);
                curSum += lowCur;
            }
            for(int j= i+1; j<n; j++){
                highCur = min(highCur,(long long)heights[j]);
                curSum += highCur;
            }
            if(curSum > ans) ans = curSum;
        }
        return ans;
    }
};