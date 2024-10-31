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
    int countNodes(TreeNode* root) {
        queue<TreeNode*> Q;
        if(root==NULL) return 0;
        int cnt =0;
        Q.push(root);
        while(!Q.empty()){
            cnt++;
            TreeNode* cur = Q.front();Q.pop();
            if(cur->left!=NULL)Q.push(cur->left);
            if(cur->right!=NULL)Q.push(cur->right);
        }
        return cnt;
    }
};