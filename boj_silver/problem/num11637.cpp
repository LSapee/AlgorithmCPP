#include <bits/stdc++.h>
using namespace std;

int T;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        int n;cin>>n;
        int sum =0;
        int ans = 0;
        int rank =0;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int k;cin>>k;
            if(k>ans){
                ans= k;
                rank = i+1;
            }
            arr.push_back(k);
            sum +=k;
        }
        int cnt =0;
        for(int i=0; i<arr.size(); i++)if(ans==arr[i])cnt++;
        if(cnt>1) cout<<"no winner\n";
        else{
            if(ans>sum/2)cout<<"majority winner "<<rank<<"\n";
            else cout<<"minority winner "<<rank<<"\n";
        }
    }

}