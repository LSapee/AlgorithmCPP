// 수 찾기
#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int n;

int binarysearch(int target){
    int st =0; // l
    int en = n-1;
    while(st<=en){
        int mid = (st+en)/2;
        if(a[mid]<target) st=mid+1;
        else if(a[mid]>target) en=mid-1;
        else return 1;
    }
    return 0;
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

//   직접 구현 코드
//    cin>>n;
//    vector<int> arr;
//    for(int i=0; i<n; i++){
//        int a; cin>>a;
//        arr.push_back(a);
//    }
//    sort(arr.begin(),arr.end());
//    int m;
//    cin>>m;
//    for(int i=0; i<m; i++){
//        int find;
//        cin>>find;
//        int l =0;
//        int r =n-1;
//        int answer =0;
//        while(answer==0&&l<=r){
//            int mid = (l+r)/2;
//            if(arr[mid] == find){
//                answer =1;
//                break;
//            }else if(find<arr[mid]){
//                r = mid-1;
//            }else if(find>arr[mid]){
//                l = mid+1;
//            }
//        }
//        cout<<answer<<"\n";
//    }
    //바킹독 답안 코드
//    cin>>n;
//    for(int i=0;i<n;i++)cin>>a[i];
//    sort(a,a+n);
//    int m;
//    cin>>m;
//    while(m--){
//        int t;
//        cin>>t;
//        cout<<binarysearch(t)<<"\n";
//    }
    // STL사용 코드
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int m;
    cin>>m;
    while(m--){
        int t;
        cin>>t;
        cout<<binary_search(a,a+n,t)<<"\n";
    }
}
