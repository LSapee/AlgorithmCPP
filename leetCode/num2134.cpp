class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int mSwaps =INT_MAX;
        // accumulate함수 0,1로 되어있으므로 모든 1의 핪은 1의 개수
        int ones =  accumulate(nums.begin(),nums.end(),0);

        // 시작점
        //1의 개수 = nums[0] 0일경우 0개 1일경우 1개이므로
        int oneCnt = nums[0];
        int ed = 0;

        for(int i=0; i<nums.size(); i++){
            // i~nums.size()까지 가면서 1이 가장 많은 범위 찾기
            if(i!=0) oneCnt-=nums[i-1];
            // 1을 모두 넣을수 있는 ones칸이 될만큼 ed를 증가 시키면서 1의 갯수를 카운팅
            while(ed-i+1<ones){
                ed++;
                oneCnt+=nums[ed%nums.size()];
            }
            // ones칸에 1이 몇개 있는지 보고 부족한 칸을 비교
            mSwaps = min(mSwaps,ones-oneCnt);
        }

        return mSwaps;
    }
};