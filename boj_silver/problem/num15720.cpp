#include <bits/stdc++.h>
using namespace std;

int ansOne = 0;
int ansTwo = 0;

vector<int> makeVe(int k){
    vector<int> temp(k,0);
    for(int i=0; i<k; i++)cin>>temp[i];
    sort(temp.rbegin(),temp.rend());
    return temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int B,C,D;cin>>B>>C>>D;
    int mn = min({B,C,D});
    vector<int> BS = makeVe(B);
    vector<int> CS =makeVe(C);
    vector<int> DS =makeVe(D);
    for(int i=0; i<mn; i++)ansOne +=BS[i]+CS[i]+DS[i];
    for(int i=mn; i<B; i++)ansTwo +=BS[i];
    for(int i=mn; i<C; i++)ansTwo +=CS[i];
    for(int i=mn; i<D; i++)ansTwo +=DS[i];
    int O = ansOne+ansTwo;
    int T = ansOne*0.9;
    T+=ansTwo;
    cout<<O<<"\n";
    cout<<T;
}
