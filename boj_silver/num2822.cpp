#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> arr(8);
    vector<int> arr2(8);
    for(int i=0; i<8; i++){
        int k;cin>>k;
        arr[i] =k;
        arr2[i] =k;
    }
    sort(arr.rbegin(), arr.rend());
    int sum =0;
    for(int i=0; i<5; i++)sum+=arr[i];
    vector<int> ans;
    cout<<sum<<"\n";
    for(int i=0; i<5; i++){
        for(int j=0; j<8; j++){
            if(arr[i]==arr2[j])ans.push_back(j);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0; i<5; i++)cout<<ans[i]+1<<" ";
}