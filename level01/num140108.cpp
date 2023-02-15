#include <bits/stdc++.h>

using namespace std;

int main(){

    string s = "aaabbaccccabba";
    int x=0;
    int other = 0;
    char f;
    int answer=0;
    int count =0;
    while(s.length()){
        if(count==0) {f=s[count]; x++;
        }else if(s[count] == f){
            x++;
        }else{
            other++;
        }
        count++;
        if(x==other){
            answer++;
            x=0;
            other=0;
            s.erase(0,count);
            count=0;
        }
    }
    cout<<answer;

}
