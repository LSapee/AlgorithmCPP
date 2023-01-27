//다음에 올 숫자
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    vector<int> nums(common.size()-1);
    int a =0;
    for(int i=0; i<common.size()-1; i++){
        nums[i] = common[i+1]-common[i];
    }
    if(nums[0]==nums[1]){
        answer =common[common.size()-1]+nums[0];
    }else{
        a = nums[1]/nums[0];
        answer = common[common.size()-1]*a;
    }
    return answer;
}