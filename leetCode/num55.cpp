class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> vis(nums.size(),-1);
        queue<int> Q;
        Q.push(0);
        vis[0]= 0;
        while(!Q.empty()){
            int cur = Q.front();Q.pop();
            for(int i=1; i<=nums[cur]; i++){
                int x = cur +i;
                if(x>=nums.size())return true;
                if(vis[x]!=-1)continue;
                vis[x] =vis[cur]+1;
                Q.push(x);
            }
        }
        if(vis[nums.size()-1]!=-1) return true;
        else return false;
    }
};