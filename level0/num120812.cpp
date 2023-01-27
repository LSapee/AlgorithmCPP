//최빈값 구하기
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    vector<int> arr(1001);
    fill(arr.begin(),arr.end(),0);
    int maxnum =0;
    int a= 0;
    int b =0;
    for(int i=0; i<array.size(); i++){
        arr[array[i]]++;
        a = arr[array[i]];
        b = max(a,arr[maxnum]);
        if(b==a){
            maxnum=array[i];
        }
    }
    sort(arr.begin(),arr.end());
    if(arr[1000] == arr[999]){
        maxnum = -1;
    }
    return maxnum;
}
