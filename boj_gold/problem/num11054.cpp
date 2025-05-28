#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    vector<int> arr(N,0);
    vector<int> cntUp(N,0);
    vector<int> cntDown(N,0);
    vector<int> temp;
    vector<int> temp2;
    for(int i=0; i<N; i++)cin>>arr[i];
    for(int i=0; i<N; i++){
        auto it = lower_bound(temp.begin(), temp.end(), arr[i]);
        if(it==temp.end()) temp.push_back(arr[i]);
        else{
            *it = arr[i];
        }
        cntUp[i]= temp.size();
    }
    for(int i=N-1; i>=0; i--){
        auto it = lower_bound(temp2.begin(), temp2.end(), arr[i]);
        if(it==temp2.end()) temp2.push_back(arr[i]);
        else{
            *it = arr[i];
        }
        cntDown[i]= temp2.size();
    }
    int ans =0;
    for(int i=0; i<N; i++)ans = max(ans, cntUp[i]+cntDown[i]-1);
    cout<<ans;
    return 0;

}