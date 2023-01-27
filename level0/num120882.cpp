//등수 매기기
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    vector<int> sc;
    vector<int> ran;
    int count =0;
    for(int i=0; i<score.size(); i++){
        sc.push_back(score[i][0]+score[i][1]);
        ran.push_back(score[i][0]+score[i][1]);
    }
    sort(sc.rbegin(),sc.rend());
    for(int i=0; i<sc.size(); i++){
        for(int j=0; j<ran.size(); ++j){
            if(sc[i]==ran[j]){
                count++;
                answer[j] = i+1;
            }
        }
        i = i+count-1;
        count=0;
    }

    return answer;
}
