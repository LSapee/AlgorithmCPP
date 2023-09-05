#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> ans;
    for(int i=0; i<progresses.size(); i++){
        int k=0;
        while(progresses[i]<100){
            k++;
            progresses[i]+=speeds[i];
        }
        ans.push_back(k);
    }
    int day = ans[0];
    int count=1;
    for(int i=1; i<ans.size(); i++){
        if(ans[i]<=day) count++;
        else{
            day = ans[i];
            answer.push_back(count);
            count=1;
        }
    }
    answer.push_back(count);

    return answer;
}