#include <bits/stdc++.h>
using namespace std;

int arr2[10];

int main(){
    int arr[8] ={1,5,5,2,3,1,4,3};
    int MX=0;
    for(int a:arr){
        MX=max(MX,a);
        arr2[a]++;
    }
    vector<int> sorta;
    for(int i=1; i<=MX; i++){
        for(int j=0; j<arr2[i]; j++){
            sorta.push_back(i);
        }
    }
    for(int i=0; i<sorta.size(); i++){
        cout<<sorta[i]<<"\n";
    }
}


//stable_sort가 필요한경우 stable_sort사용