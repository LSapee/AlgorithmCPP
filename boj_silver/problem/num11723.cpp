#include <bits/stdc++.h>
using namespace std;

int state;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    while(n--){
        string s; int k;
        cin>>s;
        if(s=="add"){
            cin>>k;
            state |= (1<<(k-1));
        }else if(s=="check"){
            cin>>k;
            cout<<((state >> (k-1))&1)<<"\n";
        }else if(s=="remove"){
            cin>>k;
            state &= (~(1<<(k-1)));
        }else if(s=="toggle"){
            cin>>k;
            state ^= (1<<(k-1));
        }else if(s=="empty"){
            state = 0;
        }else if(s=="all"){
            state = 0xfffff;
        }
    }
}

//    for(int i=0; i<n; i++){
//        string s;cin>>s;
//        int x;
//        if(s.compare("add")==0){
//            cin>>x;
//            arr[x] =true;
//        }else if(s.compare("check")==0){
//            cin>>x;
//            if(arr[x]) cout<<1<<"\n";
//            else cout<<0<<"\n";
//        }else if(s.compare("remove")==0){
//            cin>>x;
//            arr[x]=false;
//        }else if(s.compare("toggle")==0){
//            cin>>x;
//            if(arr[x]){
//                arr[x]=false;
//            }else if(!arr[x]){
//                arr[x]=true;
//            }
//        }else if(s.compare("empty")==0){
//            for(int z=1; z<21; z++) arr[z]=false;
//        }else if(s.compare("all")==0){
//            for(int z=1; z<21; z++) arr[z]=true;
//        }
//    }
