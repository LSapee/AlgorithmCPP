//튜플
#include <bits/stdc++.h>
using namespace std;


vector<int> solution(string s) {
    string ss = "";
    vector<string> arr;
    vector<int> answer;
    for(auto a : s){
        if(a-'0'>=0 && a-'0'<10){
            ss += a;
        }else if(ss.length()>0 && a ==','){
            ss+=a;
        }else if(ss.length()>0 &&a =='}'){
            arr.push_back(ss);
            ss ="";
        }
    }

//    정렬
    sort(arr.begin(), arr.end(),
         [](string a, string b) { return a.size() < b.size(); });
    answer.push_back(stoi(arr[0]));

    bool boval = false;


    for(int i=1; i<arr.size(); i++){
        ss = arr[i];
        string num ="";
        int renum = 0;
        for(int j=0; j<ss.size(); j++){
            if(ss[j]!=','&&j!=ss.size()-1){
                num+=ss[j];
                continue;
            }else if(j==ss.size()-1){
                num+=ss[j];
                renum = stoi(num);
            }else{
                renum = stoi(num);
            }
            for(int k=0; k<answer.size(); k++){
                if(answer[k] == renum){
                    boval = true;
                    break;
                }
            }
            if(!boval){
                answer.push_back(renum);
            }
            boval = false;
            num="";
        }
    }
    return answer;
}