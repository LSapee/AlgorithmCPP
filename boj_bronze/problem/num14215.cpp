#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> arr(3);
    for(int i=0; i<3; i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(arr[2]>=arr[0]+arr[1])arr[2] = arr[0]+arr[1]-1;
    cout<<arr[0]+arr[1]+arr[2];
    return 0;
}
