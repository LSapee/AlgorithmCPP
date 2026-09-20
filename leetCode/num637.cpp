/**
* Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        vector<int> arr;
        queue<pair<TreeNode*,int>> Q;
        Q.push({root,0});
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            if(cur.second == ans.size()){
                ans.push_back({});
                arr.push_back(0);
            }
            ans[cur.second]+= cur.first->val;
            arr[cur.second]++;
            if(cur.first->left != NULL) Q.push({cur.first->left,cur.second+1});
            if(cur.first->right != NULL) Q.push({cur.first->right,cur.second+1});
        }
        int n = arr.size();
        for(int i=0; i<n; i++)ans[i]/=arr[i];
        return ans;
    }
};