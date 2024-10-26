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
    bool hasPathSum(TreeNode* root, int targetSum) {
        queue<TreeNode*> Q;
        Q.push(root);
        TreeNode* cur;
        if(root==NULL)return false;
        while(!Q.empty()){
            cur = Q.front(); Q.pop();
            if(cur->left==NULL&& cur->right==NULL){
                if(cur->val==targetSum)return true;
                continue;
            }
            if(cur->left!=NULL){
                cur->left->val +=cur->val;
                Q.push(cur->left);
            }
            if(cur->right!=NULL){
                cur->right->val +=cur->val;
                Q.push(cur->right);
            }
        }
        return false;
    }
};