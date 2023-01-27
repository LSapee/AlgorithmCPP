//문자열 정렬하기(2)
#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]<97){
            my_string[i] = my_string[i]+32;
        }
    }
    sort(my_string.begin(),my_string.end());
    return my_string;
}