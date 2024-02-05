#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

vector<vector<string>> makeWords(vector<string> words){
    vector<vector<string>> arr;
    for(int i=0; i<words.size(); i++){
        vector<string> tmp;
        string s="";
        for(int j=0; j<words[i].size(); j++){
            if(words[i][j]==' '){
                tmp.push_back(s);
                s = "";
                continue;
            }
            s+=words[i][j];
        }
        tmp.push_back(s);
        arr.push_back(tmp);
    }
    return arr;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string,int>> arr;
    map<string,string> mp;
    vector<vector<string>> words= makeWords(record);
    for(int i=0; i<words.size(); i++){
        string s = words[i][0];
        string user = words[i][1];
        string name;
        int k=0;
        if(s.compare("Enter")==0){
            k=1;
            name = words[i][2];
            mp[user]= name;
        } else if(s.compare("Change")==0){
            name = words[i][2];
            mp[user] =name;
            continue;
        }
        arr.push_back({user,k});
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i].second==0){
            answer.push_back(mp[arr[i].first]+"님이 나갔습니다.");
        }else{
            answer.push_back(mp[arr[i].first]+"님이 들어왔습니다.");
        }
    }
    return answer;
}

//