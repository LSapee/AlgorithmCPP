#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    sort(works.rbegin(),works.rend());
    int w = works.size();
    while(n){
        if(works[0]==0)break;
        if(w==1){
            works[0]-=n;
            if(works[0]<0) return 0;
        }
        int t = works[0]-works[1];
        if(t==0){
            for(int i=0; i<w; i++){
                if(i==w-1){works[i]--;n--;break;}
                if(works[i]==works[i+1]){works[i]--;n--;}
                else {works[i]--;n--;break;}
                if(n==0) break;
            }
        }else{
            if(t>n)t=n;
            works[0]-=t;
            n-=t;
        }
        if(n==0)break;
        sort(works.rbegin(),works.rend());
    }
    for(int i=0; i<w; i++)answer+= works[i]*works[i];
    return answer;
}