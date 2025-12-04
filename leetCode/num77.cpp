class Solution {
public:
    vector<vector<int>> ans;
    bool vis[21];
    int N,K;
    void findCombinations(vector<int> &temp){
        if(temp.size() == K){
            ans.push_back(temp);
            return ;
        }
        for(int i=1; i<=N; i++){
            if(vis[i])continue;
            if(temp.size()>0&&temp[temp.size()-1] <=i)continue;
            vis[i]= true;
            temp.push_back(i);
            findCombinations(temp);
            temp.pop_back();
            vis[i]= false;
        }
    }

    vector<vector<int>> combine(int n, int k) {
        N=n,K=k;
        vector<int> temp;
        findCombinations(temp);
        return ans;
    }
};