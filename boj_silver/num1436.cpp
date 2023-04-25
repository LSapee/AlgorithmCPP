#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int num =666;
    int k =0;
    string title;
    while(k!=n){
        title = to_string(num);
        for(int i=0; i<title.length()-2; i++){
            if(title[i]=='6'&&title[i+1]=='6'&&title[i+2]=='6'){
                k++;
                break;
            }
        }
        num++;
    }
    cout<<title;

}
