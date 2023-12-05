#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    if(n==0) {
        cout<<0;
        return 0;
    }
    int k = n*15;
    if(k%10>=5)k+=10;
    k/=10;
    if(k%10>=5)k+=10;
    k/=10;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int sum = 0;
    int a=0;
    for(int i=k; i<n-k; i++) {
        a++;
        sum += arr[i];
    }
    sum*=10;
    sum/=a;
    if(sum%10>=5) sum+=10;
    sum/=10;
    cout<<sum;
}