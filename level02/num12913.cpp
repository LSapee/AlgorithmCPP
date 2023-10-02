#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer =0;
    int n = land.size();
    vector<vector<int>> my(n,vector<int> (4,0));
    for(int i=0; i<4; i++) my[0][i] = land[0][i];
    for(int i=1; i<n; i++){
        my[i][0] = max(my[i-1][1]+land[i][0],max(my[i-1][2]+land[i][0],my[i-1][3]+land[i][0]));
        my[i][1] = max(my[i-1][0]+land[i][1],max(my[i-1][2]+land[i][1],my[i-1][3]+land[i][1]));
        my[i][2] = max(my[i-1][0]+land[i][2],max(my[i-1][1]+land[i][2],my[i-1][3]+land[i][2]));
        my[i][3] = max(my[i-1][0]+land[i][3],max(my[i-1][1]+land[i][3],my[i-1][2]+land[i][3]));
    }
    for(int i=0; i<4; i++)answer = max(answer,my[n-1][i]);
    return answer;
}