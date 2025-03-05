#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
};

pair<int,int> findNums(int st,int ed){

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,M;cin>>N>>M;
    arr.resize(N,0);
    for(int i=0; i<N; i++)cin>>arr[i];
    while(M--){
        int st,ed;cin>>st>>ed;
        pair<int,int> findBL = findNums(st,ed);
    }

}