#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[26];
    string s = "baekjoon";
    fill(arr,arr+26, 0);
    for(int i=0; i<s.size(); i++){
        arr[ s[i]-97]++;
    }
    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
