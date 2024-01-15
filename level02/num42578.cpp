#include <string>
#include <vector>
#include <map>
#include <iostream>
#define Y second

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> mp;
    for (int i = 0; i < clothes.size(); i++) mp[clothes[i][1]]++;
    for (auto i: mp)answer *= i.Y + 1;
    answer--;
    return answer;
}
