//로그인 성공?
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for (int a =0; a<db.size(); a++){
        if (id_pw[0] == db[a][0]){
            if (id_pw[1] == db[a][1])
                return "login";
            else
                return "wrong pw";
        }
    }

    return "fail";
}