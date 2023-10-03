#include <string>
#include <vector>

using namespace std;
int answer =0;
vector<bool> ok;

void dfs(int a ,int cnt,vector<int> numbers,int target){
    if(cnt == numbers.size()){
        if(a==target){
            answer++;
            return ;
        }
        return ;
    }
    dfs(a+numbers[cnt],cnt+1,numbers,target);
    dfs(a-numbers[cnt],cnt+1,numbers,target);
}
int solution(vector<int> numbers, int target) {
    ok.resize(numbers.size());
    dfs(0,0,numbers,target);
    return answer;
}