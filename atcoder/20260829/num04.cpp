#include <bits/stdc++.h>
using namespace std;

vector<int> A;
vector<vector<int>> arr;
int N,K;

void back(int index,int sum) {
    if (index == 1) {
        A[0] = sum;
        arr.push_back(A);
        return ;
    }
    for (int i=0; i<=sum/index; i++) {
        A[index-1] = i;
        back(index-1,sum-i*index);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>K;
    A.resize(N,K);
    back(N,K);
    sort(arr.begin(),arr.end());
    for (int i=0; i<arr.size(); i++) {
        for (int j=0; j<N; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}