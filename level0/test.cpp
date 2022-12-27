#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> answer = {2,2,3,3};
    for(int i=0; i<answer.size()-1; i++){
        if(answer[i]==answer[i+1]){
            answer.erase(answer.begin()+i);
            i=-1;
        }
    }

    return 0;
}