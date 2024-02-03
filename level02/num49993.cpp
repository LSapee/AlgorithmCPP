#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool check(string s,string ss){
    vector<int> arr;
    for(int i=0; i<s.size(); i++){
        int k =ss.find(s[i]);
        arr.push_back(k);
    }
    cout<<"\n";
    for(int i=0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]==-1){
                if(arr[j]==-1)continue;
                else return false;
            }
            if(j==arr.size()-1){
                if(arr[j]==-1)break;
            }
            if(arr[i]>arr[j]){
                if(arr[j]!=-1) return false;
            }
        }
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int cnt= 0;
    for(int i=0; i<skill_trees.size(); i++){
        bool ok = check(skill,skill_trees[i]);
        if(ok)cnt++;
    }
    if(cnt!=0)answer=cnt;
    return answer;
}