#include <bits/stdc++.h>
using namespace std;

vector<int> arr(10);
int n,m;
void mn(int k){
    if(k==m){
        for(int i=0; i<m; i++)
            cout<< arr[i]<< " ";
        cout<<"\n";
        return ;
    }
    for(int i=1; i<=n; i++){
        arr[k] = i;
        mn(k+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    mn(0);

}