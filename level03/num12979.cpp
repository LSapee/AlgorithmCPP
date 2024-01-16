#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
    int nn =stations.size();
    int st = stations[0];
    int ed = stations[nn-1];
    //기지국 시작지점에서 낮은 번호의 아파트에 기지국 설치
    while(st-w>1){
        st-=w*2+1;
        answer++;
    }
    cout<<answer<<"\n";
    // 기지국 마지막 지점보다 높은 번호의 아파트에 기지국 설치;
    while(ed+w<n){
        ed+=w*2+1;
        answer++;
    }
    cout<<answer<<"\n";
    for(int i=0; i<nn-1; i++){
        if(stations[i]+w>stations[i+1])continue;
        int sk =stations[i];
        while(stations[i+1]>sk+(w*2)+1){
            if(sk+w*2<stations[i+1])sk +=w*2+1;
            else sk+=w+1;
            answer++;
        }
    }

    return answer;
}
