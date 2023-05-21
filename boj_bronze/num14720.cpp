#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr = {1,2,3};
    int count =0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(arr.size()==3 && a==0){
            arr.pop_back();
            count++;
        }else if(arr.size()==2 && a==1){
            arr.pop_back();
            count++;
        }else if(arr.size()==1 && a==2){
            count++;
            arr.push_back(1);
            arr.push_back(1);
        }
    }
    cout<<count;
}