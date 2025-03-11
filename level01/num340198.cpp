#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int check(int mat, vector<vector<string>> park,int row,int col){
    int n = row +mat;
    int m = col + mat;
    if(n>park.size()||m>park[0].size())return -1;
    for(int i=row; i<n; i++){
        for(int j=col; j<m; j++){
            if(park[i][j][0]!='-')return -1;
        }
    }
    return mat;
}

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    sort(mats.begin(),mats.end());
    for(int i=0; i<park.size(); i++){
        for(int j=0; j<park[0].size(); j++){
            if(park[i][j][0]!='-')continue;
            for(int k=0; k<mats.size(); k++)answer = max(answer,check(mats[k],park,i,j));
        }
    }
    return answer;
}