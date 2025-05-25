#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    long long ans =-1;
    vector<int> arr;
    for(int i=0; i<N; i++){
        int temp; cin>>temp;
        arr.push_back(temp);
    }
    bool go = true;
    int SIZE =0;
    int st=0,ed=N-1;
    while(st<ed){
        if(go){
            if(arr[st]==0){
                SIZE++;
                st++;
            }else{
                ans+=(SIZE+1);
                arr[st]--;
                go= false;
            }
        }else{
            if(arr[ed]==0){
                SIZE++;
                ed--;
            }else{
                arr[ed]--;
                ans+=(SIZE+1);
                //같은 위치로 왕복이 필요할 시 왕복을 한번에 계산
                int minNum = min(arr[st],arr[ed]);
                if(minNum!=0){
                    arr[st] -= minNum;
                    arr[ed] -= minNum;
                    ans+=((long long)minNum*2*(SIZE+1));
                }
                go= true;
            }
        }
    }
    if(arr[st]!=0) ans+=(arr[st]*(SIZE+1));
    if(ans==-1)cout<<0;
    else cout<<ans;
    return 0;
}