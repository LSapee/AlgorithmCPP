#include <bits/stdc++.h>

using namespace std;


const int MX =1000005;
int dat[MX],pre[MX],nxt[MX];
int unused =1;

//모든 원소를 출력
void traverse(){
    int cur = nxt[0];
    while(cur!=-1){
        cout<<dat[cur] <<' ';
        cur = nxt[cur];
    }
    cout<<"\n\n";
}

void insert(int addr,int num){
    int k = nxt[addr];
    nxt[addr] =
}
void erase(int addr){

}

int main(){
    fill(pre,pre+MX, -1);
    fill(nxt,nxt+MX, -1);

    return 0;
}