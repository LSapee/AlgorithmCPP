//7의 개수

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int a,b;
    int count =0;
    for(int i=0; i<array.size(); i++){
        a = array[i];
        while(a>0){
            b = a%10;
            if(b==7){
                count++;
            }
            a=a/10;
        }
    }
    return count;
}