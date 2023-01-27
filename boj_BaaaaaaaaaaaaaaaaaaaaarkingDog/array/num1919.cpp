#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[26]={};
    int arr2[26]={};
    int count=0;
    string s,s2;
    cin>>s>>s2;
    for(int i=0;i<s.size(); i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<s2.size(); i++){
        arr2[s2[i]-'a']++;
    }
    for(int i=0;i<26; i++){
        count += abs(arr[i]-arr2[i]);
    }
    cout<<count;
    return 0;
}