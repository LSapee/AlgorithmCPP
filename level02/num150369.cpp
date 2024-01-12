#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    int d =0;
    int p =0;

    for(int i=n-1; i>=0; i--){
        if(deliveries[i]!=0 ||pickups[i]!=0){
            int count =0;
            while(d<deliveries[i]||p<pickups[i]){
                count++;
                d+=cap;
                p+=cap;
            }
            d-=deliveries[i];
            p-=pickups[i];
            answer += (i+1)*count*2;
        }
    }
    return answer;
}