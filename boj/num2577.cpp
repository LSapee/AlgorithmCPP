#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c,d;
    cin >> a;
    cin>> b;
    cin>> c;
    int arr[10] = {};
    a = a * b * c;
    while (a > 0) {
        b = a % 10;
        arr[b]++;
        a = a/ 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i]<<"\n";
    }
    return 0;
}