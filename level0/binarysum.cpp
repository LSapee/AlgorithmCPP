#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string bin1 ="1001";
    string bin2 ="1111";
    string answer = "";
    int a = stoi(bin1);
    int b = stoi(bin2);
    int c =0;
    int d =0;
    a = a+b;
    while(a>0){
        if(a%10>1){
            c= 1;
            d = a%10-2;
            answer = to_string(d) + answer;
            a = a/10;
        }else{
            d = a%10;
            c= 0;
            answer = to_string(d)+answer;
            a=a/10;
        }
        a+=c;
    }
    if(c==1){
        answer + "1"+answer;
    }
    cout<<answer;


    return 0;
}