//
// Created on 2022/12/06.
//
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int answer =0;
    vector<int> array ={1, 2, 7, 10, 11};
    sort(array.begin(),array.end());
    int a = array.size()/2;
    answer = array[a];


    return 0;
}