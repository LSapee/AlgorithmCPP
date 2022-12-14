#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> numbers ={4,455,6,4,-1,45,6};
    string direction = "left";
    int a =0;
    if(direction.compare("right") ==0){
        a = numbers[numbers.size()-1];
        numbers.pop_back();
        numbers.insert(numbers.begin(),a);
        for(int i=0; i<numbers.size(); ++i){
            cout<<numbers[i]<<"\n";
        }
    }else{
        a = numbers.front();
        numbers.push_back(a);
        numbers.erase(numbers.begin());
        for(int i=0; i<numbers.size(); ++i){
            cout<<numbers[i]<<"\n";
        }
    }



    return 0;
}
