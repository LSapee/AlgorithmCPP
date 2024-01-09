//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    while(1){
//        int n,m;cin>>n>>m;
//        if(n==0&&m==0)break;
//        int arr[n];
//        for(int i=0; i<n; i++){
//            cin>>arr[i];
//        }
//        int count =0;
//        for(int i=0; i<m; i++){
//            int a;cin>>a;
//            int l=0;
//            int r=n-1;
//            while(l<=r){
//                int mid = (l+r)/2;
//                if(arr[mid]==a){
//                    count++;
//                    break;
//                }else if(arr[mid]>a){
//                    r=mid-1;
//                }else if(arr[mid]<a){
//                    l=mid+1;
//                }
//            }
//        }
//        cout<<count<<"\n";
//    }
//    return 0;
//}
#include<iostream>
#include<unordered_map>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        unordered_map<int,int> arr;
        int a, b;

        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        int sum = 0;

        for (int i = 0; i < a; i++) {
            int temp;
            cin >> temp;
            arr[temp] = 1;

        }
        for (int j = 0; j < b; j++) {
            int temp;
            cin >> temp;
            sum += arr.count(temp);
        }

        cout << sum << "\n";

    }


}