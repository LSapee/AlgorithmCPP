#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string s ="";
    for(int i=0; i<ingredient.size(); i++)s+=to_string(ingredient[i]);
    int k =s.find("1231");
    while(k!=-1){
        answer++;
        s = s.erase(k,4);
        k = k>=2 ? k-2: 0;
        k = s.find("1231",k);
    }
    return answer;
}
