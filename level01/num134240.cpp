#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> food ={1,3,4,6};
    int a =0;
    string s ="";
    string ss ="";
    for(int i=1; i<food.size(); i++){
        a =food[i]/2;
        while(a>0){
            s += to_string(i);
            a--;
        }
    }
    ss =s;
    reverse(ss.begin(),ss.end());


    return 0;
}