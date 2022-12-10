//
// Created on 2022/12/10.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> array ={1,2,3,4,5};
    reverse(array.begin(), array.end());
    for(int i=0; i<array.size(); ++i){
        cout<<array[i];
    }

    return 0;
}