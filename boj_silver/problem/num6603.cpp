#include <bits/stdc++.h>
using namespace std;

vector<int> lotto(6);
int n;
vector<int> arr;
void search(int a,int b){
    if(b==6){
        for(int i=0; i<6; i++)
            cout<<lotto[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=a; i<n; i++){
        lotto[b] = arr[i];
        search(i+1,b+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin>>n){
        if(n==0)break;
        for(int i=0; i<n; i++){
            int a;cin>>a;
            arr.push_back(a);
        }
        search(0,0);
        arr.clear();
        cout<<"\n";
    }
}
