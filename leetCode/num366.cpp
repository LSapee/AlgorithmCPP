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
    vector<vector<int>> ans;

    void go(TreeNode*& root,vector<int> &temp){
        if(root->left== NULL && root->right ==NULL){
            temp.push_back(root->val);
            root = nullptr;
            return ;
        }
        if(root->left != NULL) go(root->left,temp);
        if(root->right != NULL) go(root->right,temp);
    }

    vector<vector<int>> findLeaves(TreeNode* root) {
        while(root){
            vector<int> temp;
            go(root,temp);
            ans.push_back(temp);
        }
        return ans;
    }
};