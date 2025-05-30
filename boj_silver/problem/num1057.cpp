#include <vector>
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,a,b;cin>>N>>a>>b;
    int left = min(a,b);
    int right = max(a,b);
    int cnt =1;
    while(1){
        if(left%2!=0&& left +1 ==right)break;
        left = left%2==0 ? left/2 : (left+1)/2;
        right = right%2==0 ? right/2 : (right+1)/2;
        cnt++;
    }
    cout<<cnt;
    return 0;

}