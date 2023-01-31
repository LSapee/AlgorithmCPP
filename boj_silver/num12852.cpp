#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

pair<int,int> arr[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    m=n;
//    cout<<arr[0].X<<"\n";
//    cout<<arr[0].Y;
    queue<int> q;
    q.push(n);
    arr[n] = {n,0};
    while(n!=1){
        n= q.front();q.pop();

        if(n%3==0 && arr[n/3].Y==0){
            arr[n/3].Y=arr[n].Y+1;
            arr[n/3].X = n;
            q.push(n/3);
        }
        if(n%2==0 && arr[n/2].Y==0) {
            arr[n/2].Y=arr[n].Y+1;
            arr[n/2].X = n;
            q.push(n/2);
        }
        if(n!=0&&arr[n-1].Y==0) {
            arr[n-1].Y= arr[n].Y+1;
            arr[n-1].X = n;
            q.push(n-1);
        }
    }
    int k=1;
    cout<<arr[k].Y<<"\n";
    vector<int> a;
    while(k<m){
        a.push_back(arr[k].X);
        k = arr[k].X;
    }
    sort(a.rbegin(),a.rend());
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<1;
    return 0;
}