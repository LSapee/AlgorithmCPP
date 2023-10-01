#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    vector<vector<string>> arr(11,vector<string>(11,"0000"));
    int x=5,y=5;
    for(int i=0; i<dirs.size();i++){
        char sign = dirs[i];
        int k =-1;
        int kk =-1;
        int xx = x,yy=y;
        if(sign=='U'){
            k=0;
            kk=3;
            x++;
        }else if(sign=='L'){
            k=1;
            kk=2;
            y--;
        }else if(sign=='R'){
            k=2;
            kk=1;
            y++;
        }else{
            kk=0;
            k=3;
            x--;
        }
        if(x<0){x++;continue;}
        if(x>=11){x--;continue;}
        if(y<0){y++;continue;}
        if(y>=11){y--;continue;}
        if(arr[x][y][k]!='1'){
            arr[x][y][k]='1';
            arr[xx][yy][kk]='1';
            answer++;}
    }

    return answer;
}