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
    int minDiffInBST(TreeNode* root) {
        queue<TreeNode*> Q;
        if(root==NULL) return 0;
        Q.push(root);
        vector<int> arr;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            arr.push_back(cur->val);
            if(cur->left!=NULL)Q.push(cur->left);
            if(cur->right!=NULL)Q.push(cur->right);
        }
        sort(arr.begin(),arr.end());
        int ans = INT_MAX;
        for(int i=1; i<arr.size(); i++)ans = min(ans,arr[i]-arr[i-1]);
        return ans;
    }
};