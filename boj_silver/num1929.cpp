#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<bool> arr(1000002,true);

void ok(int k){
    arr[1] = false;
    for(int i=2; i*i<=k; i++){
        if(!arr[i]) continue;
        for(int j=i*i;j<=k; j+=i){
            arr[j]=false;
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    ok(m);
    for(int i=n; i<=m; i++){
        if(arr[i]) cout<<i<<"\n";
    }

    return 0;
}