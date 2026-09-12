#include <bits/stdc++.h>
using namespace std;

long long moveTo(long long target, long long& cur) {
    long long ans = abs(target - cur);
    cur = target;
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    long long cur = 0;
    long long ans =0;
    vector<long long> mArr;
    vector<long long> pArr;
    for (int i=0; i<N; i++) {
        long long temp;cin>>temp;
        if (temp>=0)pArr.push_back(temp);
        else mArr.push_back(temp);
    }
    sort(mArr.rbegin(),mArr.rend());
    sort(pArr.begin(),pArr.end());
    int m = mArr.size();
    int p = pArr.size();
    int mst =0;
    int pst =0;
    while (mst<m && pst<p) {
        long long mm = cur < 0 ? abs(abs(mArr[mst])-abs(cur)) : cur + abs(mArr[mst]);
        long long pm = cur < 0 ? abs(cur)+pArr[pst] : pArr[pst]-cur;
        if (mm<=pm) {
            ans += moveTo(mArr[mst],cur);
            mst++;
        }else {
            ans += moveTo(pArr[pst],cur);
            pst++;
        }
    }
    while (mst<m) {
        ans += moveTo(mArr[mst],cur);
        mst++;
    }
    while (pst<p) {
        ans += moveTo(pArr[pst],cur);
        pst++;
    }
    cout<<ans;
    return 0;
}
