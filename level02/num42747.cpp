#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end());
    int n = citations.size();
    int big = citations[n-1];
    for(int i=big; i>=0; i--){
        int a=0;
        for(int j=n-1; j>=0; j--){
            if(citations[j]>=i)a++;
            else break;
        }
        if(a>=i) return i;
    }

    return answer;
}