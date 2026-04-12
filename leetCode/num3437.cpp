class Solution {
public:
    vector<vector<int>> ans;
    vector<bool> vis;
    void back(int n,vector<int> &temp){
        if(temp.size() == n){
            ans.push_back(temp);
            return ;
        }
        int m = temp.size();
        for(int i=1; i<=n; i++){
            if(vis[i])continue;
            if(temp.size() == 0 || temp[m-1]%2 != i%2)temp.push_back(i);
            else continue;
            vis[i] = true;
            back(n, temp);
            vis[i] = false;
            temp.pop_back();
        }
    }

    vector<vector<int>> permute(int n) {
        vector<int> temp;
        vis.resize(n+1,false);
        back(n,temp);
        return ans;
    }
};