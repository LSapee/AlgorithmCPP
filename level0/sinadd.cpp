#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
using namespace std;

int main(){
    int answer =0;
    string my_string = "1a2b3c4d123";
    my_string =regex_replace(my_string,regex("[a-z]"),"");
    my_string =regex_replace(my_string,regex("[A-Z]"),"");

    for(int i=0; i<my_string.length(); ++i){
        answer += my_string[i]-'0';
    }
    cout<<answer;

    return 0;

}