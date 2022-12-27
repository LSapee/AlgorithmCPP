#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> score ={{80, 70}, {70, 80}, {30, 50}, {90, 100}, {100, 90}, {100, 100}, {10, 30}};

    vector<int> answer(score.size());
    vector<int> sc;
    vector<int> ran;
    int count=0;
    int r=0;
    for(int i=0; i<score.size(); i++){
        sc.push_back(score[i][0]+score[i][1]);
        ran.push_back(score[i][0]+score[i][1]);
    }
    sort(sc.rbegin(),sc.rend());
    for(int i=0; i<sc.size(); i++){
        for(int j=0; j<ran.size(); ++j){
            if(sc[i]==ran[j]){
                count++;
                answer[j] = i+1+r;
            }
        }
        i = i+count-1;
        count=0;
    }
//    맨앞 요소 삭제
    ran.erase(ran.begin());

    return 0;
}