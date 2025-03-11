#include <string>
#include <vector>
#include <map>
#include <iostream>
#define X first
#define Y second

using namespace std;
// 사람을 번호로 표 변경용
map<string,int> mp;
// 이름을 분류
pair<string,string> names(string gift){
    // ' '를 기억할 k
    int k =0;
    for(int i=0; i<gift.size(); i++){
        if(gift[i]==' '){
            k=i;
            break;
        }
    }
    return {gift.substr(0,k),gift.substr(k+1,10)};
}

int solution(vector<string> friends, vector<string> gifts) {
    // n = 사람수
    int n = friends.size();
    // n명이 선물을 몇개 받을 수 있는지 기록용 배열
    vector<int> getGifts(n,0);
    // 사람을 번호로 변경
    for(int i=0; i<n; i++) mp[friends[i]]= i;
    // 해설에 보이는 그래프 처럼 준사람 /받은사람 표시용 2차원 배열
    vector<vector<int>> arr(n,vector<int>(n,0));
    // 선물지수를 기록할 배열
    vector<int> f(n,0);
    // 선물을 주고 받는 표시
    for(int i=0; i<gifts.size(); i++){
        // 주는사람, 받는사람
        pair<string,string> cur = names(gifts[i]);
        // 선물을 주는사람은 ++
        f[mp[cur.X]]++;
        // 선물을 받는사람은 --
        f[mp[cur.Y]]--;
        //선물을 준사람이 받은사람에게 줬다고 표시
        arr[mp[cur.X]][mp[cur.Y]]++;
    }
    for(int i=0; i<n; i++){
        //i와 j를 비교하기 0-1,0-2... 1-0은 이미 0-1,에서 비교하였기에 해당 방법으로 처리
        for(int j=i+1; j<n; j++){
            //i가 j에게 준선물이 많을경우 i가 받는 선물 ++
            if(arr[i][j]>arr[j][i])getGifts[i]++;
                //j가 i에게 준 선물이 많을경우
            else if(arr[i][j]<arr[j][i]) getGifts[j]++;
                // i가 j에게 준선물이 똑같을경우
            else if(arr[i][j]==arr[j][i]){
                // i가 지수가 많으면 받을 선물을 ++
                if(f[i]>f[j])getGifts[i]++;
                    // j가 지수가 많으면 받을 선물을 ++
                else if(f[j]>f[i])getGifts[j]++;
            }
        }
    }
    //결과 저장용
    int ans =0;
    for(int i=0; i<n; i++){
        // 받은 선물이 많은 결과 저장용보다 많은 경우 ans를 해당 사람이 받을 선물 개수로 변경
        if(getGifts[i]>ans)ans= getGifts[i];
    }
    return ans;
}