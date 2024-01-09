#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 테스트 케이스
    int T;cin>>T;
    while(T--){
        // 페이크 확인용
        bool ok =false;
        //해당 글자가 몇번 등장했는지 카운팅용 배열
        int arr[26];
        // 배열 초기화
        fill(arr,arr+26,0);
        // 문자열 밷기
        string s;cin>>s;
        for(int i=0; i<s.size(); i++){
            int k =s[i]-'A';
            // 해당 문자 카운트 +1
            arr[k]++;
            // 해당 문자가 3회 나왔을때
            if(arr[k]==3){
                //카운팅은 초기화
                arr[k] =0;
                //뒤로 더이상 문자가 없거나 뒤에 문자와 현재 문자가 일지 하지 않으면 Fake니 배열 for문 탈출
                if(i+1>=s.size()||s[i+1]!=s[i]){
                    ok=true;
                    break;
                }
                //3회 나온 후에 +1 회되는 문자는 카운팅에서 제외
                i+=1;
            }
        }
        if(ok) cout<<"FAKE\n";
        else cout<<"OK\n";
    }
}