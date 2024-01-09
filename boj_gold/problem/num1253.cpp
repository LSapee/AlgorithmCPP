#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;

    vector<int> arr;
    int count=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        int st =0;
        int end =n-1;
        while(st<end){
            int k = arr[st]+arr[end];
            if(k==arr[i]){
                if(st!=i&&end!=i){
                    count++;
                    break;
                }else if(st==i){
                    st++;
                }else if(end==i){
                    end--;
                }
            }else{
                if(k>arr[i]){
                    end--;
                }else{
                    st++;
                }
            }
        }
    }
    cout<<count;
}