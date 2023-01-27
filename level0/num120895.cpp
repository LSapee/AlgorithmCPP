//인덱스 바꾸기

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
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
    return answer;
}