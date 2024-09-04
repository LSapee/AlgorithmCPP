class Solution {
public:
    // 진행방향에 있는지 확인
    bool rowCheck(int cur,int look, int move,int a){
        // 동쪽을 보고있는경우
        if(look==1){
            // 장애물에 걸리는 경우 
            if(cur+move>=a)return true;
            else return false;
        }else{
            //서쪽을 보고 있는경우
            if(cur-move<=a)return true;
            else return false;
        }
    }
    bool colCheck(int cur,int look, int move,int a){
        // 북쪽을 보고 있는 경우
        if(look==0){
            if(cur+move>=a)return true;
            else return false;
        }else{
            // 남쪽을 보고 있는 경우
            if(cur-move<=a) return true;
            else return false;
        }
    }
    void Move(int &NS,int &EW, int command,int look){
        if(look==0){
            NS+=command;
        }else if(look==1){
            EW+=command;
        }else if(look==2){
            NS-=command;
        }else{
            EW-=command;
        }
    }
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int look = 0;
        int NS =0,EW=0;
        int ans = INT_MIN;
        for(int i=0; i<commands.size(); i++){
            int command = commands[i];
            if(command==-1){
                look++;
                if(look==4)look=0;
                continue;
            }else if(command==-2){
                look--;
                if(look==-1)look=3;
                continue;
            }
            bool blocked = false;
            for(int j=0; j<obstacles.size(); j++){
                // +=E -=W
                int x = obstacles[j][0];
                // +=N -=S
                int y = obstacles[j][1];
                //북
                if(look==0){
                    // 이동해야할 축 말고 다른 축이 같을경우
                    if(EW==x){
                        if(y>NS)blocked = colCheck(NS,look,command,y);
                        else continue;
                        if(blocked){
                            NS = y-1;
                            break;
                        }
                    }
                    //동
                }else if(look==1){
                    if(NS==y){
                        if(x>EW)blocked = rowCheck(EW,look,command,x);
                        else continue;
                        if(blocked) {
                            EW = x-1;
                            break;
                        }
                    }
                    //남
                }else if(look==2){
                    if(EW==x){
                        if(y<NS)blocked = colCheck(NS,look,command,y);
                        else continue;
                        if(blocked){
                            NS = y+1;
                            break;
                        }
                    }
                    //서
                }else{
                    if(NS==y){
                        if(x<EW)blocked = rowCheck(EW,look,command,x);
                        else continue;
                        if(blocked) {
                            EW = x+1;
                            break;
                        }
                    }
                }
            }
            if(!blocked) Move(NS,EW,command,look);
            ans = max(ans,(NS*NS)+(EW*EW));
        }
        return ans;
    }
};