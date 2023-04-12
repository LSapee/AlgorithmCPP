#include <bits/stdc++.h>
using namespace std;
//a,b는 기둥의 번호
// n은 원탑의 갯수
void hanoi(int a,int b, int n){
    if(n==1) {
        cout<< a << ' ' << b <<'\n';
        return ;
    }
    hanoi(a, 6-a-b,n-1);
    cout<< a<< ' ' <<b <<' '<<'\n';
    hanoi(6-a-b , b ,n-1);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
//  총 이동 횟수는 2^n-1
    string s = to_string(pow(2,n));
    int d = s.find('.');
    string answer = s.substr(0,d);
    answer[answer.length()-1]-=1;
    cout<<answer<<'\n';
    if(n<=20){
        hanoi(1,3,n);
    }

}
