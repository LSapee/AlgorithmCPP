class Solution {
public:
    vector<vector<int>> arr;
    int n;
    vector<int> numbers;
    vector<bool> vis;
    void back(vector<int> temp){
        if(temp.size()==n){
            arr.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if(vis[i])continue;
            vis[i]= true;
            temp.push_back(numbers[i]);
            back(temp);
            temp.pop_back();
            vis[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        numbers=nums;
        n = nums.size();
        vis.resize(n,false);
        vector<int> temp;
        back(temp);
        return arr;
    }
};