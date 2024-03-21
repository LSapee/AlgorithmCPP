#include <bits/stdc++.h>
using namespace std;

int ans=0;
int k;
int leftT(deque<int> DQ){
    int cnt= 0;
    while(!DQ.empty()){
        if(DQ.front() == k) return cnt;
        DQ.push_front(DQ.back());
        DQ.pop_back();
        cnt++;
    }

}
int rightT(deque<int> &DQ){
    int cnt= 0;
    while(!DQ.empty()){
        if(DQ.front() == k) return cnt;
        DQ.push_back(DQ.front());
        DQ.pop_front();
        cnt++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    deque<int> DQ;
    for(int i=1; i<=n; i++) DQ.push_back(i);
    for(int i=0; i<m; i++){
        cin>>k;
        int l = leftT(DQ);
        int r = rightT(DQ);
        if(l<=r){
            ans+=l;
            while(!DQ.empty()){
                if(DQ.front() == k) break;
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
        }else{
            ans+=r;
            while(!DQ.empty()){
                if(DQ.front() == k) break;
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
        }
        DQ.pop_front();
    }
    cout<<ans;
}