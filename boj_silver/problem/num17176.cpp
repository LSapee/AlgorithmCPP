#include <bits/stdc++.h>
using namespace std;
int arr[53];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;

    for(int i=0; i<n; i++){
        int k; cin>>k; arr[k]++;
    }
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ')arr[0]--;
        else{
            if(s[i]<=90){
                arr[s[i]-64]--;
            }else{
                arr[s[i]-70]--;
            }
        }
    }
    for(int i=0; i< 53; i++){
        if(arr[i]<0) {
            cout<<"n";
            return 0;
        }
    }
    cout<<"y";
}