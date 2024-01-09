#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> t_sum,arr;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int sum = arr[i]+arr[j];
            t_sum.push_back(sum);
        }
    }
    sort(t_sum.begin(),t_sum.end());
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            int ans = arr[i]-arr[j];
            if(binary_search(t_sum.begin(),t_sum.end(),ans)){
                cout<<arr[i];
                return 0;
            }
        }
    }



    return 0;
}