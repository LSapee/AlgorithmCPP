#include <bits/stdc++.h>

using namespace std;
int student[100002];
vector<int> arr;
int n;

void start(int x){
    int cur = x;
    while(1){
        student[cur] = x;
        cur = arr[cur];
        if(student[cur] ==x){
            while(student[cur]!=-1){
             student[cur] =-1;
             cur= arr[cur];
            }
            return ;
        }
        else if(student[cur]!= 0) return ;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T; cin>>T;
    while(T--){
        int ans =0;
        cin>>n;
        fill(student,student+n+1,0);
        arr.resize(n+1);
        for(int i=1;i<=n; i++)cin>>arr[i];
        for(int i=1;i<=n; i++) if(student[i]==0) start(i);
        for(int i=1; i<=n; i++) if(student[i]!=-1)ans++;
        cout<<ans<<"\n";

    }
}