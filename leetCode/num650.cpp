class Solution {
public:
#define MX 1001
    vector<int> nums;
    void primeNum(){
        for(int i=2; i<MX; i++){
            int k =1;
            if(nums[i]!=0)continue;
            while(i*k<MX){
                nums[i*k]=k;
                k++;
            }
        }
        for(int i=0; i<MX; i++){
            if(nums[i]==1)nums[i]=i;
            else nums[i] = INT_MAX;
        }
    }

    int minSteps(int n) {
        //화면의 문자 A가 있고 A가 n개 되려면 몇번의 연산이 필요한가?
        //소수는 해당 회수 
        // 9  1->2->3->6->9;
        // 8  1->2->4->6->8 복붙 복붙붙붙 6회 , 1->2->4->8.복붙붙 복붙 5회
        // 6  1->2->3->6 복붙붙 복붙 1->2->4->6 복붙 복붙붙 5회
        // 12 1->2->3->6->12 복붙붙 복붙 복붙 7 1->2->4->8->12 복붙 복붙 복붙붙 7  
        // 5  1->2->3->4->5 복붙붙붙붙 
        nums.resize(MX,0);
        primeNum();
        nums[0]=0;
        nums[1]=0;
        for(int i=2; i<MX; i++){
            int k =2;
            while(i*k<MX){
                nums[i*k] = min(nums[i*k],nums[i]+k);
                k++;
            }
        }
        return nums[n];
    }
};