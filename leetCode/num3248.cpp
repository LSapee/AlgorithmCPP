class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int snake =0;
        for(int i=0; i<commands.size(); i++){
            if(commands[i][0]=='U')snake-=n;
            else if(commands[i][0]=='R')snake+=1;
            else if(commands[i][0]=='L')snake-=1;
            else if(commands[i][0]=='D')snake+=n;
        }
        return snake;
    }
};