#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    string arr[n];
    for(int i=0 ;i<n; i++)cin>>arr[i];
    string s ="";
    bool ok = false;
    for(int i=1; i<n; i++){
        if(arr[i-1][0]<=arr[i][0]){
            int k =0;
            ok = true;s = "INCREASING";
            //글자가 같을겨우 다음 글자로 비교
            while(arr[i-1][k]==arr[i][k]){
                k++;
                if(arr[i-1][k]>arr[i][k]){
                    ok =false;
                    break;
                }
            }
            if(!ok) break;
        }else{
            ok = false; break;
        }
    }
    if(ok){
        cout<<s;
        return 0;
    }
    for(int i=1; i<n; i++){
        if(arr[i-1][0]>=arr[i][0]){
            ok = true; s= "DECREASING";
            int k=0;
            // 글자가 같을경우 다음글자로 비교
            while(arr[i-1][k]==arr[i][k]){
                k++;
                if(arr[i-1][k]<arr[i][k]){
                    ok =false;
                    break;
                }
            }
            if(!ok) break;
        }else {
            ok  = false; break;
        }
    }
    if(ok) cout<<s;
    else cout<<"NEITHER";
    return 0;
}