#include <bits/stdc++.h>
using namespace std;

int numbers[26] ={3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> arr;
    string jong,her; cin>>jong>>her;
    vector<int> k;
    for(int i=0; i<jong.size(); i++){
        k.push_back(numbers[jong[i]-'A']);
        k.push_back(numbers[her[i]-'A']);
    }
    arr.push_back(k);
    while(k.size()!=2){
        k.clear();
        int b = arr.size()-1;
        for(int i=0; i<arr[b].size()-1; i++){
            k.push_back((arr[b][i]+arr[b][i+1])%10);
        }
        arr.push_back(k);
        for(int i=0; i<k.size(); i++) cout<<k[i]<<" ";
        cout<<"\n";
    }
    cout<<k[0]<<k[1];

}