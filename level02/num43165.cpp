#include <bits/stdc++.h>
using namespace std;

int cou =0;
vector<bool> ok;

void dfs(int a ,int cnt,vector<int> numbers,int target){
    if(cnt == numbers.size()){
        if(a==target){
            cou++;
            return ;
        }
        return ;
    }
    dfs(a+numbers[cnt],cnt+1,numbers,target);
    dfs(a-numbers[cnt],cnt+1,numbers,target);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> numbers = {1,1,1,1,1};
    int target =3;
    ok.resize(numbers.size());
    dfs(0,0,numbers,target);
    cout<<cou;
}

