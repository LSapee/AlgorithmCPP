//
// Created on 2022/12/04.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {7,77,17};
    int a,b;
    int count =0;
    for(int i=0; i<arr.size(); i++){
        a = arr[i];
        while(a>0){
            b = a%10;
            if(b==7){
                count++;
            }
            a=a/10;
        }
    }
    cout<<count;
    return 0;

}