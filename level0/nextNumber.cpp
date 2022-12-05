//
// Created on 2022/12/05.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> common = {2,4,8};
    vector<int> nums(common.size()-1);
    int a =0;
    for(int i=0; i<common.size()-1; i++){
        nums[i] = common[i+1]-common[i];
    }
    if(nums[0]==nums[1]){
        cout<<common[common.size()-1]+nums[0];
    }else{
        a = nums[1]/nums[0];
        cout<<common[common.size()-1]*a;
    }

    return 0;
}