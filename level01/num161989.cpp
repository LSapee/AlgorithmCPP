#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n =4,m=1;
    vector<int> section {1,2,3,4};
    int count =0;
    int k=0;
    for(int i=0; i<section.size(); i++){
        if(k<section[i]){
            count++;
            k=section[i]+m-1;
        }
    }
    cout<<count;

}