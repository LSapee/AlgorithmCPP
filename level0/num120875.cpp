#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> dots = {{1, 4}, {9, 2}, {3, 8}, {11, 6}};
    sort(dots.begin(),dots.end());
    vector<int> dot1 = dots[0];
    vector<int> dot2 = dots[1];
    vector<int> dot3 = dots[2];
    vector<int> dot4 = dots[3];
//선 1-2 &3-4   1-3% 2-4    1-4 &2-3
    int x,y,count,answer;
    count =0;
    answer =0;
    x = abs(dot2[0] - dot1[0])+2;
    y = abs(dot2[1] - dot1[1])+2;
    if((abs(dot3[0]-dot4[0])+2)%x==0 &&abs((dot3[1]-dot4[1])+2)%y==0 ){
        count++;
    }else if(x==y && (abs(dot3[0]-dot4[0]) ==abs(dot3[1]-dot4[1])) ){
        count++;
    }
    x = abs(dot3[0] - dot1[0])+2;
    y = abs(dot3[1] - dot1[1])+2;
    if((abs(dot2[0]-dot4[0])+2)%x==0 &&(abs(dot2[1]-dot4[1])+2)%y==0 ){
        count++;
    }else if(x==y && (abs(dot2[0]-dot4[0]) ==abs(dot2[1]-dot4[1]))){
        count++;
    }
    x = abs(dot4[0] - dot1[0])+2;
    y = abs(dot4[1] - dot1[1])+2;
    if((abs(dot2[0]-dot3[0])+2)%x==0 &&(abs(dot3[1]-dot2[1])+2)%y==0 ){
        count++;
    }else if(x==y && ( abs(dot3[0]-dot2[0]) ==abs(dot3[1]-dot2[1]) )){
        count++;
    }
    if(count>0){
        answer =1;
    }

    return 0;
}