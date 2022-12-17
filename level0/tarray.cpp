#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> num_list = {1, 2, 3, 4, 5, 6, 7, 8};
    int n=2;
    int count =0;
    vector<vector<int>> answer;
    vector<int> a;
    for(int i=0; i<num_list.size(); ++i){
        a.push_back(num_list[i]);
        count++;
        if(count==n){
            count=0;
            answer.push_back(a);
            a.clear();
        }
    }


    return 0;
}