#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    if (b==0)
        return a;
    return gcd(b,a%b);
}


int main(){
    cout<<gcd(15,10);
    string n;
    string s;
    int MX =INT_MIN;
    getline(cin,n);
    int k =stoi(n);

    for(int i=0; i<k; i++){
        int num =0;
        vector<int> arr;
        getline(cin,s);
        for(auto a:s){
            if(a!=' '){
                num*=10;
                num+=a-'0';
            }else if(a==' '){
                arr.push_back(num);
                num=0;
            }
        }
        arr.push_back(num);
        int z =0;
        for(int j=0; j<arr.size()-1;j++){
            for(int m = j+1; m<arr.size(); m++){
                z = gcd(arr[j],arr[m]);
                MX =max(MX,z);
            }

        }
        cout<<MX<<"\n";
        MX = INT_MIN;
    }
}