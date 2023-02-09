#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int sum =2015;
        int arr[26] ={0,};
        string s;
        cin>>s;
        for(int j=0; j<s.size();j++){
            if(arr[s[j]-'A'] !=0) continue;
            sum-= s[j];
            arr[s[j]-'A'] =1;
        }
        cout<<sum<<"\n";
    }
}