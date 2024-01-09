#include <bits/stdc++.h>
using namespace std;

int n,target;
int arr[100001];

int bfs(){
    fill(arr,arr+100001,-1);
    queue<int> Q;
    Q.push(n);
    arr[n] = 0;
    while(!Q.empty()){
        int k= Q.front(); Q.pop();
        for(int a : {2*k,k+1,k-1}){
            if(a<0||a>100000)continue;
            if(arr[a]!=-1)continue;
            arr[a] = arr[k]+1;
            if(a==target) return arr[a];
            Q.push(a);
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>target;
    int k = bfs();
    vector<int> ans(k+1);
    ans[0] = n;
    ans[k] = target;
    int re = target;
    while(k>0){
        k--;
        //홀수일경우
        if(re%2!=0){
            if(arr[re+1]==k){
                ans[k]=re+1;
                re+=1;
                continue;
            }else if(arr[re-1]==k){
                ans[k] =re-1;
                re-=1;
                continue;
            }
        }else{
            //짝수일 경우
            if(arr[re/2]==k){
                ans[k]=re/2;
                re/=2;
                continue;
            }else if(arr[re+1]==k){
                ans[k]=re+1;
                re+=1;
                continue;
            }else if(arr[re-1]==k){
                ans[k] =re-1;
                re-=1;
                continue;
            }
        }
    }
    cout<<ans.size()-1<<"\n";
    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
}