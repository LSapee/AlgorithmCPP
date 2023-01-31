#include <bits/stdc++.h>
using namespace std;

int n =10;
int arr[1000001];
int tmp[1000001];

void merge(int st,int en){
    int mid = (st+en)/2;
    int lidx = st;
    int ridx = mid;
    for(int i=st; i<en; i++){
        if(ridx == en) tmp[i] = arr[lidx++];
        else if(lidx == mid) tmp[i]= arr[ridx++];
        else if(arr[lidx]<=arr[ridx])tmp[i] =arr[lidx++];
        else tmp[i] =arr[ridx++];
    }
    for(int i=st; i<en; i++) arr[i] = tmp[i];
}
void merge_sort(int st,int en){
    if(en==st+1) return ;
    int mid = (st+en)/2;
    merge_sort(st,mid);
    merge_sort(mid,en);
    merge(st,en);
}

int main(){
    for(int i=1; i<n/2;i=i+2){
        arr[i] = i*2;
        arr[i+1] = i*3;
    }
    merge_sort(0,n);
    for(int i=1; i<n;i++){
        cout<<arr[i]<<" ";
    }

}
