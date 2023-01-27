#include <bits/stdc++.h>
using namespace std;

int main(){

   vector<vector<int>> arr1 ={{2,3,2},{4,2,4},{3,1,4}};
    vector<vector<int>> arr2 = {{5,4,3},{2,4,1},{3,1,1}};
    vector<vector<int>> answer;
    vector<int> an;
    for(int i=0; i<arr1.size(); i++){
        for(int k=0; k<arr2[0].size(); k++){
            int sum = 0;
            for(int j=0; j<arr2.size(); j++) {
                sum += arr1[i][j] * arr2[j][k];
            }
            an.push_back(sum);
        }
        answer.push_back(an);
        an.clear();
    }
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr1[0].size(); j++){
            cout<< answer[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}