//숨어있는 숫자의 덧셈(2)
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int> arr;
    string s ="";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i] >=65 && s.size()>0){
            arr.push_back(stoi(s));
            s ="";
        }else if(my_string[i]<65){
            s = s+my_string[i];
        }
        if(i==my_string.size()-1 && s.size()>0){
            arr.push_back(stoi(s));
        }
    }
    for(int i=0; i<arr.size(); i++){
        answer += arr[i];
    }
    return answer;
}