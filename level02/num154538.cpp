#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int arr[1000001];
int solution(int x, int y, int n) {
    int answer = 0;
    fill(arr,arr+1000001,-1);
    queue<int> Q;
    arr[x] =0;
    Q.push(x);
    while(!Q.empty()){
        int k = Q.front();Q.pop();
        for(auto a :{k+n,k*2,k*3}){
            if(a>1000000)continue;
            if(arr[a]!=-1 && arr[a]<arr[k]+1)continue;
            arr[a] = arr[k]+1;
            Q.push(a);
        }
    }
    return arr[y];
}