#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[26] ={};
    int arr2[26] ={};
    string s,s2;
    int a,count;
    count=0;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>s;
        cin>>s2;
        for(int j=0; j<s.size(); j++){
            arr[s[j]-'a']++;
            arr2[s2[j]-'a']++;
        }
        for(int j=0; j<26; j++){
            if(arr[j]!=arr2[j]){
                count++;
                break;
            }
        }
        if(count>0){
            cout<<"Impossible"<<"\n";
        }else{
            cout<<"Possible"<<"\n";
        }
        fill(arr,arr+26,0);
        fill(arr2,arr2+26,0);
        count =0;
    }

    return 0;
}