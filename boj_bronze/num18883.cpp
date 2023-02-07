#include <iostream>

using namespace std;

int main(){
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            count++;
            if(j!=m-1)
                cout<<count<<" ";
            else
                cout<<count;
        }
        cout<<"\n";
    }
}