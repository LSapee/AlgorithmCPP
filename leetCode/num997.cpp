class Solution {
public:
    vector<int> peoples;
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ans;
        // 마을 사람의 신뢰를 얼마나 받는지 배열로 표시
        for(int i=0; i<=n; i++) peoples.push_back(0);

        //그래프 작성
        vector<vector<int>> arr(n+1,vector<int>(0));
        for(int i=0; i<trust.size(); i++){
            int x = trust[i][0];
            arr[x].push_back(trust[i][1]);
        }
        // A사람이 B 사람을 신뢰 하는 횟수 추가
        for(int i=1; i<=n; i++){
            for(int j=0; j<arr[i].size(); j++){
                int k = arr[i][j];
                peoples[k]++;
            }
        }
        // n-1만큼 신뢰 받은 사람을 ans 배열에 추가 (n-1인 이유는 본인 제외)
        for(int i=1; i<=n; i++) if(peoples[i]==n-1) ans.push_back(i);

        // 조건 1에 부합 한 사람을 대상으로 조건2에 부합하는지 확인 
        for(int i=0; i<ans.size(); i++){
            int k = ans[i];
            // 조건2에 부합하면 바로 정답 (1,2조건이 맞는 사람은 1명만 존재 하기 때문에)
            if(arr[k].size()==0) return k;
        }
        // 조건 1과 조건 2를 만족하지 못하면 -1을 리턴
        return -1;
    }
};