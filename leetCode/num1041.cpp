class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        int x =0;
        int y =0;
        int index =0;
        for(int i=0; i<4; i++){
            for(int j=0; j<instructions.size(); j++){
                if(instructions[j]=='G'){
                    x+=dx[index];
                    y+=dy[index];
                    continue;
                }
                if(instructions[j]=='L'){
                    index--;
                    if(index==-1)index=3;
                }else{
                    index++;
                    if(index==4)index=0;
                }
            }
        }
        if(x==0&&y==0)return 1;
        else return 0;
    }
};