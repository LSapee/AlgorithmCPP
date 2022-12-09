//
// Created on 2022/12/09.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> array ={1, 2, 3, 4, 5};
    sort(array.begin(),array.end());
    int a = array[array.size()-2]*array[array.size()-1];
    cout<<a;

    return 0;
}