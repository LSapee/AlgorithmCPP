#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N,M,K,X,Y;cin>>N>>M>>K>>X>>Y;
    //디저트 N개
    // 음료 M개
    // K 달러 지폐가 Y장
    // 1달러가 X
    // 디저트 자판기는 두 가지 종류의 화폐 다 사용가능
    // 음료는 K달러 짜리만 가능
    vector<ll> foods(N), drinks(M);
    for (int i =0; i<N; i++)cin>>foods[i];
    for (int i=0; i<M; i++)cin>>drinks[i];
    sort(foods.begin(), foods.end());
    sort(drinks.begin(), drinks.end());
    vector<ll> foodPrefix(N + 1, 0);
    for (int i = 0; i < N; ++i) foodPrefix[i + 1] = foodPrefix[i] + foods[i];

    const ll totalMoney = (ll)X + (ll)K * Y;

    ll usedBills = 0;
    ll drinkCost = 0;  
    ll ans = 0;

    for (int drinkCount = 0; drinkCount <= M; ++drinkCount) {
        if (drinkCount > 0) {
            ll price = drinks[drinkCount - 1];
            usedBills += price / K + (price % K != 0);
            drinkCost += price;
        }
        // 종료
        if (usedBills > Y) break;
        ll remainingMoney = totalMoney - drinkCost;
        ll foodCount =
            upper_bound(foodPrefix.begin(), foodPrefix.end(),
                        remainingMoney)
            - foodPrefix.begin() - 1;
        ans = max(ans, (ll)drinkCount + foodCount);
    }
    cout<<ans <<"\n";
    return 0;
}