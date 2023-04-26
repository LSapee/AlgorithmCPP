#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> D;
    for(int i=1; i<=yellow/2; i++){
        if(yellow%i==0) D.push_back(i);
    }
    D.push_back(yellow);
    for(int i=0; i<D.size(); i++){
        int w = D[i]+1;
        int h = D[D.size()-(1+i)]+1;
        if((h*2)+(w*2)== brown){
            answer.push_back(h+1);
            answer.push_back(w+1);
            break;
        }
    }
    return answer;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int b,y; cin>>b>>y;
    vector <int> k = solution(b,y);
    cout<<k[1]<<" "<<k[0];
}