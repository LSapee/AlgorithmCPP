#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    int k =2;
    vector<int> ans;
    sort(arr.begin(),arr.end());
    while(k<=arr[arr.size()-1]){
        bool ok = false;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]%k==0){
                ok= true;
                arr[i]/=k;
            }
        }
        if(ok) ans.push_back(k);
        sort(arr.begin(),arr.end());
        if(!ok) k++;
    }
    for(int i=0; i<ans.size(); i++)answer*=ans[i];

    return answer;
}