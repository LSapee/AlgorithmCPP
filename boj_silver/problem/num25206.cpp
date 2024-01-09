#include <iostream>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string,double> mp;
    mp["A+"] =4.5;
    mp["A0"] = 4.0;
    mp["B+"] =3.5;
    mp["B0"]=3.0;
    mp["C+"]=2.5;
    mp["C0"]=2.0;
    mp["D+"]=1.5;
    mp["D0"]=1.0;
    mp["F"] = 0.0;
    double sum = 0;
    double count=0;
    for(int i=0; i<20; i++){
        string s,ss;double d;
        cin>>s>>d>>ss;
        if(ss[0]=='P') continue;
        count+= d;
        sum+= d*mp[ss];
    }
    cout.precision(7);
    cout<<sum/count;

    return 0;
}