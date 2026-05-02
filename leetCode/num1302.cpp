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
    vector<vector<int>> arr;
    void go(TreeNode* root,int cur){
        if(arr.size()<=cur) arr.push_back({});
        arr[cur].push_back(root->val);
        if(root->left != NULL) go(root->left, cur+1);
        if(root->right != NULL) go(root->right, cur+1);
    }

    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0;
        go(root,0);
        int ans =0;
        int n = arr.size();
        for(int i=0; i<arr[n-1].size(); i++)ans+=arr[n-1][i];
        return ans;
    }
};