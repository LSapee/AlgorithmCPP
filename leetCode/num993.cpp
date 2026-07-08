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
    int xp = 0;
    int yp = 0;
    int xd = 0;
    int yd = 0;
    void dfs(TreeNode* root, int x, int y,int depth){
        if(root==NULL)return;
        if(root->left != NULL) {
            if(root->left->val == x ){
                xp = root->val;
                xd = depth+1;
            }
            if(root->left->val == y){
                yp = root->val;
                yd = depth+1;
            }
            dfs(root->left, x, y, depth+1);
        }
        if(root->right != NULL) {
            if(root->right->val == x ){
                xp = root->val;
                xd = depth+1;
            }
            if(root->right->val == y){
                yp = root->val;
                yd = depth+1;
            }
            dfs(root->right, x, y, depth+1);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,x,y,0);
        return xd == yd && xp != yp;
    }
};