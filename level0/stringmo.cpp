#include <iostream>
#include <string>
using namespace std;

int main(){

    string answer ="";
    string my_string = "hello";
    int n =3;
    for(int i=0; i<my_string.length(); ++i){
        for(int j=0; j<n; ++j){
            answer = answer + my_string[i];
        }
    }
    cout<<answer;

    return 0;
}