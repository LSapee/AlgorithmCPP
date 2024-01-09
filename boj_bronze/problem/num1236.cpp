#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,ans=0;cin>>n>>m;
    vector<string> arr;
    vector<int> a(n);
    vector<int> b(m);
    int z=0,x=0;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        arr.push_back(s);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='X') b[j]++;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[j][i]=='X') a[j]++;
        }
    }
    for(int i=0; i<n; i++) if(a[i]==0) z++;
    for(int i=0; i<m; i++) if(b[i]==0) x++;
    ans = max(z,x);
    cout<<ans;
}