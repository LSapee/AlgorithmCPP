//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> AB;
//unordered_map<int,int> CDMap;
//int n;
//void sumV(vector<int> &A,vector<int> &B){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            AB.push_back(A[i]+B[j]);
//        }
//    }
//}
//void setCDMap(vector<int> &C,vector<int> &D){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            CDMap[C[i]+D[j]]++;
//        }
//    }
//}
//
//
//
//void input(){
//    vector<int> A(n);
//    vector<int> B(n);
//    vector<int> C(n);
//    vector<int> D(n);
//    for(int i=0; i<n; i++) cin>>A[i]>>B[i]>>C[i]>>D[i];
//    sumV(A,B);
//    setCDMap(C,D);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin>>n;
//    input();
//    int ans =0;
//    for(int i =0; i<AB.size(); i++) if(CDMap.find(0-AB[i])!=CDMap.end())ans+= CDMap[0-AB[i]];
//    cout<<ans;
//    return 0;
//}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> AB;
vector<ll> CD;
int n;
int N;

void sumV(vector<int> &A,vector<int> &B){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            AB.push_back((ll)A[i]+B[j]);
        }
    }
}
void setCD(vector<int> &C,vector<int> &D){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            CD.push_back((ll)C[i]+D[j]);
        }
    }
}
int bsS(int x){
    int st =0;
    int ed = N;
    while(st<ed){
        int mid = (st+ed)/2;
        if(x<=CD[mid])ed=mid;
        else st=mid+1;
    }
    return st;
}
int bsD(int x){
    int st =0;
    int ed =N;
    while(st<ed){
        int mid = (st+ed)/2;
        if(x>=CD[mid])st=mid+1;
        else ed=mid;
    }
    return st;
}
void input(){
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C(n);
    vector<int> D(n);
    for(int i=0; i<n; i++) cin>>A[i]>>B[i]>>C[i]>>D[i];
    sumV(A,B);
    setCD(C,D);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    input();
    ll ans =0;
    N=CD.size();
    sort(CD.begin(),CD.end());
    for(int i=0; i<AB.size(); i++){
        int x= bsS(0-AB[i]);
        int y= bsD(0-AB[i]);
        ans+= y-x;
    }
    cout<<ans;
    return 0;
}
