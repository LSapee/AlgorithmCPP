#include <bits/stdc++.h>
using namespace std;
int main(){

    int k =3;
    vector<int> score ={10, 100, 20, 150, 1, 100, 200};
    vector<int> arr;
    vector<int> result;
    for(int i=0;i<score.size(); i++){
        arr.push_back(score[i]);
        sort(arr.rbegin(),arr.rend());
        if(arr.size()<=k){
            result.push_back(arr[arr.size()-1]);
        }else{
            arr.pop_back();
            result.push_back(arr[arr.size()-1]);
        }
    }
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<"\n";
    }

    return 0;
}