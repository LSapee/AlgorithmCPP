#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin>>n){
        if(n==0) break;
        vector<pair<double,string>> arr;
        double top =0;
        for(int i=0; i<n; i++){
            string s;double d;
            cin>>s>>d;
            arr.push_back({d,s});
            top = max(top,d);
        }
        for(int i=0; i<n; i++)if(top==arr[i].X) cout<<arr[i].Y<<" ";
        cout<<"\n";
    }
    return 0;
}