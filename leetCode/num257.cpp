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
    vector<string> ans;
    void go(TreeNode* root,string s){
        if(root->left ==NULL && root->right == NULL){
            ans.push_back(s+"->"+to_string(root->val));
            return ;
        }
        if(root->left!=NULL) go(root->left,s+"->"+to_string(root->val));
        if(root->right!=NULL) go(root->right,s+"->"+to_string(root->val));
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if(root->left==NULL && root->right ==NULL)ans.push_back(to_string(root->val));
        if(root->left!=NULL) go(root->left,to_string(root->val));
        if(root->right!=NULL) go(root->right,to_string(root->val));
        return ans;
    }
};