#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,ss,sss;
    cin>>s>>ss>>sss;
    int n = s.size();
    int m= sss.size();
    string answer ="";
    if(ss == "*"){
        answer = answer+"1";
        for(int i=1; i<n+m-1; i++){
            answer = answer+"0";
        }
    }else{
        if(n==m){
            answer = answer+"2";
            for(int i=1;i<n;i++){
                answer = answer +"0";
            }
        }else if(n>m){
            for(int i=n-1; i>0; i--){
                if(i==n-m){
                    answer = "1" + answer;
                    continue;
                }
                answer ="0"+ answer;
            }
            answer = "1" + answer;
        }else{
            for(int i=m-1; i>0; i--){
                if(i==m-n){
                    answer = "1" + answer;
                    continue;
                }
                answer ="0"+ answer;
            }
            answer = "1" + answer;
        }
    }
    cout<<answer;
}
