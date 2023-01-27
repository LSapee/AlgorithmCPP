//겹치는 선분의 길이
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int solution(vector<vector<int>> lines) {
    sort(lines.begin(),lines.end());

    vector<int> line1 = lines[0];
    vector<int> line2 = lines[1];
    vector<int> line3 = lines[2];

    int k =0;
    int a=0,b=0,c=0;
    if(line1[1]>line2[0]){
        if(line1[1]>line2[1]){
            a = abs(line2[1]-line2[0]);
            k++;
        }else{
            a = abs(line1[1]-line2[0]);
        }
    }
    if(line1[1]>line3[0]){
        if(line1[1]>line3[1]){
            b = abs(line3[1]-line3[0]);
            k++;
        }else{
            b = abs(line1[1]-line3[0]);
        }
    }
    if(line2[1]>line3[0]){
        if(line2[1]>line3[1]){
            c = abs(line3[1]-line3[0]);
        }else{
            c = abs(line2[1]-line3[0]);
        }
    }

    int answer = 0;
    if(k>1){
        answer = a+b-c;
    }else{
        answer = a+c-b;
    }
    return answer;
}
