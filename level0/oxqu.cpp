#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

    vector<string> result;

    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }

    return result;
}


int main(){
    vector<string> quiz ={"3 - 4 = -3", "5 + 6 = 11"};
    vector<string> answer;

    for (int i=0; i<quiz.size(); i++){
        string s = quiz[i];
        vector<string> a;
        a = split(s,' ');
        int n = stoi(a[0]);
        int m = stoi(a[2]);
        int re = stoi(a[4]);
        if(a[1].compare("+")==0){
            n = n+m;
        }else{
            n = n-m;
        }
        if(n==re){
            answer.push_back("O");
        }else{
            answer.push_back("X");
        }
    }
    for(int i=0; i<answer.size(); i++){
        cout<<answer[i];
    }

    return 0;
}