#include <bits/stdc++.h>
#define A 'a'
#define E 'e'
#define I 'i'
#define O 'o'
#define U 'u'

using namespace std;

//모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
//모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
//같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
bool hasGather(char c){
    if(c==A) return true;
    if(c==E) return true;
    if(c==I) return true;
    if(c==O) return true;
    if(c==U) return true;
    return false;
}
bool tt(string s){
    // f=자음  t=모음
    vector<bool> arr(s.size(),true);
    // 같은글자 2번인지 확인
    for(int i=0; i<s.size(); i++){
        if(i==s.size()-1)arr[i] = hasGather(s[i]);
        if(s[i]==E||s[i]==O||i==s.size()-1)continue;
        if(s[i]==s[i+1])return false;
        arr[i] = hasGather(s[i]);
    }
    int cnt = 1;
    bool ok = false;
    for(int i=0; i<arr.size(); i++){
        if(arr[i])ok=true;
        if(i==arr.size()-1){
            if(ok)return true;
            else return false;
        }
        if(arr[i]==arr[i+1])cnt++;
        else cnt=1;
        if(cnt==3)return false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    while(cin>>s){
        if(s.compare("end")==0)break;
        bool ans = tt(s);
        if(!ans){
            cout<<"<"<<s<<"> is not acceptable.\n";
        }else{
            cout<<"<"<<s<<"> is acceptable.\n";
        }
    }

}