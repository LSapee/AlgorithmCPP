#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;cin>>s;
    int si = s.size()-1;
    int k =0;
    int sum =0;
    string ans = "";
    for(int i=si; i>=0; i--){
        k++;
        if(k==1){
            sum+= s[i]-'0';
        }else if(k==2){
            sum+= (s[i]-'0')*2;
        }else if(k==3){
            sum+= (s[i]-'0')*4;
            ans += sum+'0';
            k=0;
            sum =0;
        }
    }
    if(sum !=0)ans += sum+'0';
    for(int i=ans.size()-1; i>=0; i--)cout<<ans[i];
    if(ans.size()==0)cout<<0;

}
