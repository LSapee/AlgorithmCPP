#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> classCnt;
vector<vector<int>> arr;

int sameClassmate(int my){
    vector<bool> temp;
    temp.resize(n,false);
    for(int i=0; i<5; i++){
        for(int j=0; j<n; j++){
            if(j==my)continue;
            if(arr[j][i] == arr[my][i])temp[j]=true;
        }
    }
    int cnt = 0;
    for(int i=0; i<temp.size(); i++)if(temp[i]) cnt++;
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<5; j++){
            int k;cin>>k;temp.push_back(k);
        }
        arr.push_back(temp);

    }
    for(int i=0; i<n; i++){
        int k =sameClassmate(i);
        classCnt.push_back(k);
    }
    int ans = 1;
    int mx = 0;
    for(int i=0; i<classCnt.size(); i++){
        if(mx<classCnt[i]){
            mx = classCnt[i];
            ans = i+1;
        }
    }
    cout<<ans;
}