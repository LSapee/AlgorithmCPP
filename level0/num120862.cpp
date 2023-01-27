// 최대값 만들기(2)

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <limits.h>

using namespace std;

int solution(vector<int> numbers) {
    int maxnum = INT_MIN;
    int a =0;
    for(int i=0; i<numbers.size(); ++i){
        for(int j=0; j<numbers.size(); ++j){
            a =numbers[i]*numbers[j];
            if(i!=j){
                maxnum = max(maxnum,a);
            }
        }
    }
    return maxnum;
}