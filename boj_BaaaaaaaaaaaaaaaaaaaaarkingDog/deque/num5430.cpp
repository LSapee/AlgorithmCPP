#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        deque<int> deq;
        string s,arr,num="";
        int a;
        cin>>s>>a>>arr;
//      문자열 배열을 덱에 담는 것
        for(int j=0; j<arr.size(); j++){
            int k = arr[j]-'0';
            if (k >= 0 && k <= 9)
                num += arr[j];
            if (arr[j]==',' || arr[j] ==']') {
                if(num.length()==0){
                    break;
                }
                deq.push_back(stoi(num));
                num = "";
            }
        }
//      명령처리
        int start =0;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='R'){
                if(deq.empty()){
                }else if(start ==0){
                    start = deq.size()-1;
                }else{
                    start=0;
                }
            }else{
                if(deq.empty()){
                    start=-1;
                    break;
                }
                if(start ==0){
                    deq.pop_front();
                }else if(start!=0){
                    deq.pop_back();
                    start--;
                }
            }
        }
        if(start ==-1){
            cout<<"error\n";
        }else if(start ==0){
            cout<<"[";
            while(!deq.empty()){
                cout<<deq.front();
                deq.pop_front();
                if(deq.empty()){
                    break;
                }
                cout<<",";
            }
            cout<<"]\n";// \n처리 안해서 에러나는거 모리고 30분 뻘짓함
        }else{
            cout<<"[";
            while(!deq.empty()){
                cout<<deq.back();
                deq.pop_back();
                if(deq.empty()){
                    break;
                }
                cout<<",";
            }
            cout<<"]\n";
        }
    }


    return 0;

}