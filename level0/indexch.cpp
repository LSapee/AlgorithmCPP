#include <iostream>
#include <string>
using namespace std;

int main(){

    string my_string = "hello";
    int num1 =1;
    int num2 =2;
    char arr[my_string.size()];
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(i == num1){
            arr[i] = my_string[num2];
        }else if(i == num2){
            arr[i] = my_string[num1];
        }else{
            arr[i] = my_string[i];
        }
        answer = answer +arr[i];
    }
    cout<<answer;
    return 0;

}