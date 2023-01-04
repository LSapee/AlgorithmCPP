#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ="foobar";
    int arr[26];
    fill(arr, arr+26 ,-1);
    vector<int> answer;
    for(int i=0; i<s.size(); i++){
        if(arr[s[i]-'a']!=-1){
            answer.push_back(i-arr[s[i]-'a']);
        }else{
            answer.push_back(arr[s[i]-'a']);
        }
        arr[s[i]-'a'] = i;
    }
    for(int i=0; i<answer.size(); i++){
        cout<<answer[i]<<"\n";
    }
    return 0;
}