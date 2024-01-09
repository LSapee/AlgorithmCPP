#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;cin>>s;
    vector<string> arr(8);
    string k="";
    int cnt=0;
    bool ok = false;
    int st =0;
    int ed = 0;
    for(int i=0; i<s.size(); i++){
        int kk =i+1;
        if(kk>=s.size())break;
        if(s[i]==':'){
            if(s[kk]==':'){
                st =kk;
                ed =i;
                ok = true;
                break;
            }
        }
    }

    if(ok){
        //::표현이 존재할 경우
        // ed = 앞 문자열의 끝
        // st = 뒷 문자열의 시작
        int a = 0;
        for(int i=0; i<ed; i++){
            if(s[i]==':'){
                while(k.size()<4){
                    k = "0"+k;
                }
                arr[a] = k;
                a++;
                k="";
                continue;
            }
            k+=s[i];
        }
        while(k.size()<4){
            k = "0"+k;
        }
        arr[a] = k;
        k ="";
        int b = 7;
        for(int i=s.size()-1; i>st; i--){
            if(s[i]==':'){
                while(k.size()<4){
                    k = "0"+k;
                }
                arr[b] = k;
                b--;
                k="";
                continue;
            }
            k = s[i]+k;
        }
        while(k.size()<4){
            k = "0"+k;
        }
        arr[b] = k;
        for(int i=0; i<8; i++) if(arr[i].size()==0) arr[i]="0000";

    }else{
        // :: 표현이 없을 때
        for(int i=0; i<s.size(); i++){
            if(s[i]==':'){
                while(k.size()<4){
                    k = "0"+k;
                }
                arr[cnt] = k;
                cnt++;
                k="";
                continue;
            }
            k+=s[i];
        }
        while(k.size()<4){
            k = "0"+k;
        }
        arr[7] = k;
    }

    for(int i=0; i<arr.size(); i++){
        if(i==7)cout<<arr[i];
        else cout<<arr[i]<<":";
    }


}