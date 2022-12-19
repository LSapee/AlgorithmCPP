#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> numbers = {1,2,3,4,5};
    int num1 = 1;
    int num2 = 3;
    vector<int> answer;

    for(int i=num1; i<=num2; i++){
        answer.push_back(numbers[i]);
    }



    return 0;
}