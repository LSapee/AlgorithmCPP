//
// Created on 2022/12/11.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string my_string = "jaron";
    string s ="";
    reverse(my_string.begin(), my_string.end());
    s = my_string;
    cout<<s;

    return 0;
}