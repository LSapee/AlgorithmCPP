#include <bits/stdc++.h>
using namespace std;

struct pe{
    int year;
    int month;
    int day;
    string name;
};

int n;

pe change(int year,int month,int day,string name){
    pe ans = {year,month,day,name};
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    //연도 기준으로 즉 mx가 젤 나이가 적은사람 mn이 나이가 가장 많은 사람
    pe mxName = {0,0,0,"A"};
    pe mnName = {9999,99,99,"A"};
    for(int i=0; i<n; i++){
        string name;
        int year,month,day;
        cin>>name>>day>>month>>year;
        if(year<mnName.year) mnName = change(year,month,day,name);
        if(year>mxName.year) mxName = change(year,month,day,name);
        if(year==mnName.year){
            if(month<mnName.month){
                mnName = change(year,month,day,name);
            }else if(month==mnName.month){
                if(day<mnName.day) mnName= change(year,month,day,name);
            }
        }
        if(year==mxName.year){
            if(month>mxName.month){
                mxName = change(year,month,day,name);
            }else if(month==mxName.month){
                if(day>mxName.day) mxName= change(year,month,day,name);
            }
        }
    }
    cout<<mxName.name<<"\n"<<mnName.name;



}