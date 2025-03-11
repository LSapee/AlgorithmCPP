#include <string>
#include <vector>
#include <map>

using namespace std;
//코드번호 제조일 최대수량 현재수량
// ext를 낮은 것만 뽑아내기
// sort_by기준으로 오름차순
map<string,int> mp;
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    mp["code"]=0;
    mp["date"]=1;
    mp["maximum"]=2;
    mp["remain"]=3;
    int st =mp[ext];
    int sort_num= mp[sort_by];
    for(int i=0; i<data.size(); i++){
        if(data[i][st]>=val_ext)continue;
        answer.push_back(data[i]);
    }
    for(int i=0; i<answer.size()-1; i++){
        for(int j=i+1; j<answer.size(); j++){
            if(answer[i][sort_num]>answer[j][sort_num])swap(answer[i],answer[j]);
        }
    }

    return answer;
}