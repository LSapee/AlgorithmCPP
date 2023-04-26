#include <iostream>

using namespace std;

int solution(int n)
{
    int ans = 0;
    while(n){
        ans+=n%2;
        n/=2;
    }
    return ans;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    cout<<solution(n);

}
