#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int n = people.size();
    int st =0;
    sort(people.begin(),people.end());
    for(int i=n-1; i>=st; i--){
        answer++;
        for(int j=st; j<i; j++){
            if(limit-people[i]>=people[j]){
                st++;
            }
            break;
        }
    }
    return answer;
}