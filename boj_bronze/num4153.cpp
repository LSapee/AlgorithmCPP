#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int w,h,a;

    while(1){
        cin>>w>>h>>a;
        vector<int> arr;
        if(w==0&&h==0&&a==0){
            break;
        }
        arr.push_back(w);
        arr.push_back(h);
        arr.push_back(a);
        sort(arr.begin(),arr.end());
        if((arr[0]*arr[0])+(arr[1]*arr[1]) ==(arr[2]*arr[2])){
            cout<<"right\n";
        }else{
            cout<<"wrong\n";
        }
    }
    return 0;
}