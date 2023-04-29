#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<int> A;
bool visited[10];
int n,m;
void mn(int k){
    if(k==m){
        for(int i=0; i<k; i++)cout<<A[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=0;i<arr.size(); i++){
        if(!visited[i]){
            visited[i] = true;
            A.push_back(arr[i]);
            mn(k+1);
            A.pop_back();
            visited[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    mn(0);
}