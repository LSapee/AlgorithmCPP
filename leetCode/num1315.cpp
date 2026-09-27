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
    int ans;
    void back(TreeNode* root,int gp, int p){
        if(root==NULL) return ;
        if(gp%2==0)ans+=root->val;
        if(gp == -1 && p != -1)gp = p;
        else if(gp!=-1) gp= p;
        if(root->left != NULL ) back(root->left,gp,root->val);
        if(root->right != NULL ) back(root->right,gp,root->val);
    }

    int sumEvenGrandparent(TreeNode* root) {
        ans =0;
        back(root,-1,-1);
        return ans;
    }
};