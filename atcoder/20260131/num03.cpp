#include <bits/stdc++.h>
using namespace std;

int N,T;
vector<int> arr;
void input(){
    cin>>N>>T;
    for(int i=0; i<N; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    int offTime = 0;
    int nxtOff = -1;
    for(int i=0; i<N; i++){
        if(arr[i]<=nxtOff)continue;
        if(arr[i]+100 <=T){
            offTime += 100;
            nxtOff =arr[i]+ 100;
        }else {
            offTime += T-arr[i];
            break;
        }
    }
    cout<<T-offTime;
    return 0;

}