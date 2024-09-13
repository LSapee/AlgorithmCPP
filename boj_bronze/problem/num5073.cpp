#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(1){
        vector<int> arr(3,0);
        for(int i=0; i<3; i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        if(arr[0]==0&&arr[1]==0&&arr[2]==0)break;
        if(arr[0]+arr[1]<=arr[2])cout<<"Invalid\n";
        else if(arr[0]==arr[1]&&arr[1]==arr[2])cout<<"Equilateral\n";
        else if(arr[0]==arr[1])cout<<"Isosceles\n";
        else if(arr[2]==arr[1])cout<<"Isosceles\n";
        else cout<<"Scalene\n";
    }
    return 0;
}
