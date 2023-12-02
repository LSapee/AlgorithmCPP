#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<string> arr;
    int a =0;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        arr.push_back(s);
        if(s[0]=='?') a= i;
    }
    int m;cin>>m;
    vector<string> ans;
    // 이미 사용된 단어 제거
    for(int i=0; i<m; i++){
        string s; cin>>s;
        bool ok =false;
        for(int j=0; j<n; j++) if(arr[j].compare(s)==0)ok =true;
        if(!ok) ans.push_back(s);
    }
    if(n==1){
        cout<<ans[0];
        return 0;
    }
    for(int i=0; i<ans.size(); i++){
        arr[a] = ans[i];
        if(a==0){
            if(arr[a+1][0]==arr[a][arr[a].size()-1])cout<<ans[i];
        }else if(a==n-1){
            if(arr[a-1][arr[a-1].size()-1]==arr[a][0])cout<<ans[i];
        }else{
            if(arr[a-1][arr[a-1].size()-1]==arr[a][0]&&arr[a+1][0]==arr[a][arr[a].size()-1])cout<<ans[i];
        }
    }

}
