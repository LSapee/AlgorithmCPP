#include <string>
#include <vector>

using namespace std;

int makeS(string s){
    int M = stoi(s.substr(0,2))*60;
    int S = stoi(s.substr(3,2));
    return M+S;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int videoTime = makeS(video_len);
    int curTime = makeS(pos);
    int OP_start = makeS(op_start);
    int OP_ed = makeS(op_end);
    if(curTime>=OP_start&&curTime<=OP_ed) curTime = OP_ed;
    for(int i=0; i<commands.size(); i++){
        if(commands[i][0]=='n')curTime+=10;
        else curTime-=10;
        if(curTime>videoTime)curTime=videoTime;
        if(curTime<0)curTime=0;
        if(curTime>=OP_start&&curTime<=OP_ed) curTime = OP_ed;
    }
    string m =to_string(curTime/60);
    string s =to_string(curTime%60);
    if(m.size()<2)m="0"+m;
    if(s.size()<2)s="0"+s;
    answer = m+":"+s;
    return answer;
}