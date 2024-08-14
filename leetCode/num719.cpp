class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        // 시간 초과
        // int n =nums.size();
        // int tempSize = 0;
        // for(int i=1; i<n; i++)tempSize+=i;
        // vector<int> temp(tempSize,0);
        // int st = 0;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]-nums[j]<=0)temp[st]= nums[j]-nums[i];
        //         else temp[st]= nums[i]-nums[j];
        //         st++;
        //     }
        // }
        // sort(temp.begin(),temp.end());
        // 정렬
        sort(nums.begin(),nums.end());
        // 배열의 길이
        int n = nums.size();
        // 시작
        int l = 0;
        // 1쌍의 거리중 가장 큰 거리
        int r = nums[n-1]-nums[0];
        while(l<r){
            //거리의 중간값처리
            int mid = (l+r)/2;
            // 중간의 거리보다 작거나 같은 페어 카운팅
            int cnt = cntPair(nums,mid);
            if(cnt<k){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        return l;
    }
private:
    int cntPair(vector<int>& nums, int mid){
        // 중간거리보다 적은 쌍 세기
        int cnt =0;
        int n = nums.size();
        //왼쪽 시작
        int l = 0;
        for(int r= 0; r<n; r++){
            // mid 보다 큰 nums[r]-nums[l]범위 r-l의 쌍이 존재 nums[r]-nums[l]이 mid보다 커질시 l을 올려서 범위 조정
            while(nums[r]-nums[l]>mid) l++;
            cnt+=r-l;
        }
        return cnt;
    }
};

