#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string A = "apple";
    string B = "elppa";
    int answer =-1;
    int len = A.size();
    int count =0;
    while(count<len){
        count++;
       A = A[A.size()-1]+A;
        A.pop_back();
        cout<<A<<"\n";
        if(A.compare(B)==0){
            answer = 1;
            break;
        }
    }
    cout<<answer;

    return 0;
}