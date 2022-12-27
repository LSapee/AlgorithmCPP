#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> numlist = {1,2,3,4,5,6};
    int n = 4;
    int a =0;
    vector<int> arr;
    vector<int> arr2;
    vector<int>answer;
    for(int i=0; i<numlist.size(); i++){
        if(numlist[i]-n<0){
            arr.push_back(numlist[i]-n);
        }else{
            arr2.push_back(numlist[i]-n);
        }
    }
    sort(arr.rbegin(),arr.rend());
    sort(arr2.begin(),arr2.end());
    while(arr.size()>0 ||arr2.size()>0){
        if(arr.size()==0){
            answer.push_back(arr2[a]+n);
            arr2.erase(arr2.begin());
            continue;
        }
        if(arr2.size()==0){
            answer.push_back(arr[a]+n);
            arr.erase(arr.begin());
            continue;
        }
        if(arr2[a]<=abs(arr[a])){
            answer.push_back(arr2[a]+n);
            arr2.erase(arr2.begin());
        }else{
            answer.push_back(arr[a]+n);
            arr.erase(arr.begin());
        }
    }

    return 0;
}