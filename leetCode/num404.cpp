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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            if(cur->left!=nullptr){
                if(cur->left->left==nullptr &&cur->left->right==nullptr) sum += cur->left->val;
                else Q.push(cur->left);
            }
            if(cur->right!=nullptr) Q.push(cur->right);
        }
        return sum;
    }
};