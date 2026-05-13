/**
* Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void go(TreeNode* cloned, TreeNode* target){
        if(ans!=NULL)return;
        if(cloned->val == target->val){
            ans =cloned;
            return;
        }
        if(cloned->left != NULL)go(cloned->left,target);
        if(cloned->right != NULL)go(cloned->right,target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        go(cloned,target);
        return ans;
    }
};