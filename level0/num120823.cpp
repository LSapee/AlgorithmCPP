//직삼각형 출력하기
#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
