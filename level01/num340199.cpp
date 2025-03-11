#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    int w = bill[0];
    int h = bill[1];
    int targetW = wallet[0];
    int targetH = wallet[1];
    if(targetW>=w&&targetH>=h)return 0;
    while(1){
        if(w>h){
            w/=2;
        }else{
            h/=2;
        }
        answer++;
        if(max(targetW,targetH)>=max(w,h)&&min(targetW,targetH)>=min(w,h))break;
    }
    return answer;
}