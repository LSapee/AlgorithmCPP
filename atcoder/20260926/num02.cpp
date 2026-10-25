#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,D;cin>>N>>D;
    vector<int> arr(N);
    for (int i=0; i<N; i++)cin>>arr[i];
    vector<int> ans;
    for (int i=0; i<N; i++) {
        bool ok = false;
        for (int j=0; j<N; j++) {
            if (i==j)continue;
            if (abs(arr[i]-arr[j]) <D) {
                ok= true;
                break;
            }
        }
        if (!ok)ans.push_back(i+1);
    }

    if (ans.size()>0) {
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        for (int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
    }else {
        cout<<0;
    }

    return 0;
}
