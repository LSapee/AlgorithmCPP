#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int nums(int n){
    string s ="";
    int count=0;
    while(n>0){
        if(n%2==1) count++;
        s= to_string(n%2) + s;
        n/=2;
    }
    return count;
}


int solution(int n) {
    int count = nums(n);
    int k =1;
    while(1){
        n++;
        if(count==nums(n)) return n;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k =solution(78);
    return 0;
}