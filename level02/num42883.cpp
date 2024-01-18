#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int st =0;
    for(int i=st; i<number.size(); i++){
        if(number[i]<number[i+1]){
            number.erase(i,1);
            i =i>=2?i-2:-1;
            k--;
        }
        if(k==0)break;
    }
    while(k>0){
        number.erase(number.size()-k,k);
        k-=k;
    }

    return number;
}
