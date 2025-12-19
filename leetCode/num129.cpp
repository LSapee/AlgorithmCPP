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
    int ans =0;
    void addRootToLeaf(TreeNode* root,string s){
        if(root->left ==NULL && root->right == NULL){
            s+=to_string(root->val);
            ans+= stoi(s);
            return ;
        }
        if(root->left != NULL) addRootToLeaf(root->left,s+to_string(root->val));
        if(root->right != NULL) addRootToLeaf(root->right,s+to_string(root->val));
    }

    int sumNumbers(TreeNode* root) {
        addRootToLeaf(root,"");
        return ans;
    }
};