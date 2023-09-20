#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<char> arr;
bool visited[15];
void back(int a,string s){
    int cnt=0;
    if(s.size() == n){
        for(int i=0; i<s.size(); i++)
            if(s[i] !='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u') cnt++;
        if(cnt==n||cnt<2)return ;
        cout<<s<<"\n";
        return ;
    }
    for(int i=a; i<m; i++){
        if(visited[i]) continue;
        visited[i] = true;
        s+= arr[i];
        back(i+1,s);
        visited[i] =false;
        s.erase(s.size()-1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<m; i++){
        char ch; cin>>ch;
        arr.push_back(ch);
    }
    sort(arr.begin(),arr.end());
    string s= "";
    back(0,s);
    return 0;
}