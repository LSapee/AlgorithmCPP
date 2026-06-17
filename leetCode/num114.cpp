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
    void flatten(TreeNode* root) {
        if(root==NULL) return ;
        TreeNode* ans = root;
        while(ans!=NULL){
            if(ans->left != NULL){
                TreeNode* r = ans->left;
                while(r->right !=NULL)r = r->right;
                r ->right = ans->right;
                ans->right = ans->left;
                ans->left = NULL;
            }
            ans = ans->right;
        }

    }
};