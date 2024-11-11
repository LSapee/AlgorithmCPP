class Solution {
public:
    vector<int> primeNums;

    void makePrime(){
        bool p[1001];
        memset(p,1001,false);
        for(int i=2; i*i<=1000; i++){
            for(int j =1; j*i<=1000; j++){
                if(p[i])break;
                if(j==1)continue;
                p[i*j] = true;
            }
        }
        for(int i=2; i<=1000; i++)if(!p[i])primeNums.push_back(i);
    }

    bool check(vector<int>& nums){
        for(int i=1; i<nums.size(); i++)if(nums[i]<=nums[i-1])return false;
        return true;
    }

    bool primeSubOperation(vector<int>& nums) {
        makePrime();
        bool ok = check(nums);
        if(ok)return true;
        for(int i=0; i<nums.size(); i++){
            int k = nums[i];
            for(int j=primeNums.size()-1; j>=0; j--){
                if(primeNums[j]>=k)continue;
                if(i==0){
                    nums[i] = k-primeNums[j];
                    break;
                }else{
                    if(k-primeNums[j]>nums[i-1]) {nums[i]= k-primeNums[j];break;}
                    else continue;
                }
            }
        }
        ok = check(nums);
        if(ok) return true;
        return false;
    }
};
/*
 *  1. 소수 찾기!
 *  2. 현재 배열이 정렬이 되어있는지 확인 -> 이미 되어있다면 true반환
 *  3. 정렬이 되어 있지 않다면 0번부터 nums[i]보다 작은 소수중에 가장 큰 소수를 빼고 nums[i]보다 클경우 nums[i]는 해당 소수를 뺀 수로 변경
 *  4. 다시 정렬 확인 -> 정렬되어있다면 true 안되어있다면 false를 반환
 */