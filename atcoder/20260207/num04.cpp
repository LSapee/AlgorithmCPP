#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> A;
int maxA = 0;
void input(){
    cin>>N;
    for(int i=0; i<N; i++){
        int a;cin>>a;
        A.push_back(a);
        maxA = max(maxA,a);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    vector<long long> numsCnt(maxA + 2, 0);
    for (int a : A) numsCnt[a]++;
    vector<long long> sums(maxA, 0);
    long long temp = 0;
    for (int i=maxA; i>= 1; --i) {
        temp += numsCnt[i];
        sums[i-1] = temp;
    }
    vector<int> ans;
    long long over= 0;
    for (int i= 0; i <maxA; i++) {
        long long x = sums[i]+over;
        ans.push_back((int)(x%10));
        over = x/10;
    }
    while (over >0) {
        ans.push_back((int)(over % 10));
        over /= 10;
    }
    int Size = ans.size();
    for (int i =Size-1; i>=0; --i) cout<<ans[i];
    return 0;
}