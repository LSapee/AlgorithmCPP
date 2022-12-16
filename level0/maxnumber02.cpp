#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>    // 리미트 최대 최소값 정리된 것
using namespace std;

int main(){
    vector<int> numbers = {0, -31, 24, 10, 1, 9};
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
    cout<<maxnum;
    return 0;
}