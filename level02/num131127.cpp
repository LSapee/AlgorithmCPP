#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int n = want.size();
    int m = discount.size();
    int st =0;
    map<string,int> mp;
    for(int i=0; i<m; i++){
        int cnt =0;
        mp[discount[i]]++;
        for(int j=0; j<n; j++)if(mp[want[j]] >= number[j])cnt++;
        if(n==cnt) answer++;
        if(i>=9){
            mp[discount[st]]--;
            st++;
        }

    }
    return answer;
}