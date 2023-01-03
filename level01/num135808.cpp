#include <bits/stdc++.h>
using namespace std;
int main(){
    int k=4,m=3;
    vector<int> score = {4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2};
    sort(score.begin(),score.end());
    int answer = 0;
    int len = score.size();
    while(len>0){
        if(len-m<0){
            break;
        }
        answer += score[len-m]*m;
        len-=m;
    }
    cout<<answer;

    return 0;
}