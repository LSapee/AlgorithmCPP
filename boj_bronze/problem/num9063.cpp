#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    if(T==1){
        cout<<0;
        return 0;
    }
    int xMin = INT_MAX;
    int xMax = INT_MIN;
    int yMin = INT_MAX;
    int yMax = INT_MIN;
    while(T--){
        int a,b;cin>>a>>b;
        xMin = min(xMin,a);
        xMax = max(xMax,a);
        yMin = min(yMin,b);
        yMax = max(yMax,b);
    }
    cout<<(xMax-xMin)*(yMax-yMin);
    return 0;
}
