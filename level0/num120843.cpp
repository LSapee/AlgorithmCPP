//공 던지기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers, int k) {
    int count =1;
    int a =0;
    while(count<k){
        a = numbers[0];
        numbers.erase(numbers.begin());
        numbers.push_back(a);
        a = numbers[0];
        numbers.erase(numbers.begin());
        numbers.push_back(a);
        count++;
    }

    return numbers[0];
}

int main(){
    cout<<"adsad";
}
