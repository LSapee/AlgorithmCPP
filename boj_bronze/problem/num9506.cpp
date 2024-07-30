#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int k;
    while(cin>>k){
        if(k==-1) break;
        vector<int> arr;
        arr.push_back(1);
        for(int i=2; i<k/2; i++){
            if(k%i==0){
                if(k/i<i)break;
                arr.push_back(i);
                arr.push_back(k/i);
            }
        }
        sort(arr.begin(),arr.end());
        int sum = 0;
        for(int i=0; i<arr.size(); i++)sum+=arr[i];
        if(sum==k){
            cout<<k<<" =";
            for(int i=0; i<arr.size()-1; i++){
                cout<<" "<<arr[i]<<" +";
            }
            cout<<" "<<arr[arr.size()-1]<<"\n";
        }else{
            cout<<k<<" is NOT perfect.\n";
        }
    }
    return 0;
}