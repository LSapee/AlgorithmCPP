#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string my_string = "BcAd";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]<97){
            my_string[i] = my_string[i]+32;
        }
    }
    sort(my_string.begin(),my_string.end());

    cout<<my_string;



    return 0;
}