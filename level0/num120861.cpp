//캐릭터의 좌표
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0,0};
    int xlim = board[0]/2;
    int ylim = board[1]/2;
    for(int i=0; i<keyinput.size(); i++){
        if(keyinput[i].compare("up")==0){
            answer[1]++;
            if(answer[1]>ylim){
                answer[1]=ylim;
            }
        }else if(keyinput[i].compare("down")==0){
            answer[1]--;
            if(answer[1]<-ylim){
                answer[1]=-ylim;
            }
        }else if(keyinput[i].compare("left")==0){
            answer[0]--;
            if(answer[0]<-xlim){
                answer[0]=-xlim;
            }
        }else{
            answer[0]++;
            if(answer[0]>xlim){
                answer[0]=xlim;
            }
        }
    }

    return answer;
}