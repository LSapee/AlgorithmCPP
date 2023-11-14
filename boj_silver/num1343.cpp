#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cnt =0;
    string s;cin>>s;
    string ans ="";
    vector<int> arr;
    for(int i =0; i<s.size(); i++){
        if(s[i]=='X'){
            if(cnt<0) {
                arr.push_back(cnt);
                cnt=1;
            }
            else cnt++;
        }else{
            if(cnt>0) {
                arr.push_back(cnt);
                cnt=-1;
            }
            else cnt--;
        }
    }
    if(cnt!=0) arr.push_back(cnt);
    for(int i=0; i<arr.size(); i++){
        int k = arr[i];
        if(k>0){
            if(k%2==1) {ans="-1";break;}
            else{
                while(k>0){
                    if(k-4>=0) {
                        ans += "AAAA";
                        k-=4;
                    }else if(k-2>=0){
                        ans+="BB";
                        k-=2;
                    }
                }
            }
        }else{
            while(k!=0){
                ans+=".";
                k++;
            }
        }
    }
    cout<<ans;
}