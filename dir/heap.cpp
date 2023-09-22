#include <bits/stdc++.h>
using namespace std;

int heap[100005];
int sz = 0;//heap에 들어있는 원소의 수
//push
void push(int x){
    heap[++sz] = x;
    int k =sz;
    while(k!=1){
        if(heap[k/2]<=heap[k])break;
        swap(heap[k/2],heap[k]);
        k/=2;
    }
}
//top
int top(){
    return heap[1];
}
//pop
void pop(){
    heap[1] = heap[sz--];
    int root =1;
    while(2*root<=sz){
        int lc = 2*root,rc = 2*root+1;
        int mc = lc;
        if(rc<=sz&& heap[rc]<heap[lc]) mc =rc;
        if(heap[root]<=heap[mc])break;
        swap(heap[root],heap[mc]);
        root = mc;
    }
}

//void test(){
//    push(123);
//    push(23);
//    push(90);
//    push(1);
//    cout<<top();
//}

int main(){
    int n;cin>>n;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        if(a==0) {
            cout<<top()<<"\n";
            pop();
            continue;
        }
        push(a);
    }
}