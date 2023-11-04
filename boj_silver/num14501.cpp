#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int day[n+1];
    int money[n+1];
    for(int i=1; i<=n; i++) cin>>day[i]>>money[i];
    int ans[n+2];
    for(int i=0; i<n+2; i++)ans[i]=0;
    for(int i=n; i>0; i--){
        if(i+day[i] >n+1) ans[i] = ans[i+1];
        else ans[i] = max(ans[i+1],ans[i+day[i]]+money[i]);
    }
    cout<<ans[1];
}