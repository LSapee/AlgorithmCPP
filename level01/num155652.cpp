#include <bits/stdc++.h>

using namespace std;

char c[51];

int main(){
    string s ="ybcde";
    string skip = "az";
    int index = 1;
    sort(skip.begin(),skip.end());
    for(int i=0; i<s.size(); i++){
        c[i]= s[i];
        for(int j=0; j<index; j++){
            if(c[i]=='z') {
                c[i] = 'a';
            }else{
                c[i] +=1;
            }
            for(int k=0; k<skip.size(); k++){
                if(c[i]==skip[k]){
                    k=-1;// skip을 정렬해서 a~z순서대로 만들었지만 z에서 a로 갔을때 스킵에 a가 있으면 에러 발생하기에 넣어줌
                    if(c[i]=='z') {
                        c[i] = 'a';
                    }else{
                        c[i]+=1;
                    }
                }
            }
        }
    }
    string answer ="";
    for(int i=0; i<s.size(); i++){
        answer += c[i];
    }
    cout<<answer;
    return 0;
}
//vwxyz