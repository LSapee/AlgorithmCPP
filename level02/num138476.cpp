#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int sum =0;
    vector<int> arr;
    map<int,int> mp;
    for(int i=0; i<tangerine.size(); i++){
        int t =tangerine[i];
        mp[t]++;
    }
    sort(tangerine.begin(),tangerine.end());
    tangerine.erase(unique(tangerine.begin(),tangerine.end()),tangerine.end());
    for(int i=0; i<tangerine.size(); i++){
        int p = tangerine[i];
        arr.push_back(mp[p]);
    }
    sort(arr.rbegin(),arr.rend());
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        answer++;
        if(k<=sum) break;
    }

    return answer;
}