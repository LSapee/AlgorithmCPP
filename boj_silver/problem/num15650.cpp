#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
void NandM(int a,int b){
    if(b==m){
        for(int i=0; i<m; i++){
            cout<< arr[i]<<" ";
        }
        cout<<'\n';
        return ;
    }
    for(int i=a; i<=n; i++){
        arr[b] = i;
        NandM(i+1,b+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    NandM(1,0);

}
