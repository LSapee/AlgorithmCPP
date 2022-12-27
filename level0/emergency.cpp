#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> emergency = {30, 10, 23, 6, 100};
    vector<int> emergency2 = emergency;
    vector<int> answer;
    sort(emergency2.begin(),emergency2.end());

    for(int i=0; i<emergency2.size(); ++i){
        for(int j =0; j<emergency.size(); ++j){
            if(emergency2[i] == emergency[j]){
                answer.push_back(emergency2.size()-j);
                break;
            }
        }
    }
    for(int i=0; i<answer.size(); ++i){
        cout<<answer[i]<<"\n";
    }


    return 0;
}