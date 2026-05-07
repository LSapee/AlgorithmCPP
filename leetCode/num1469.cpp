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
    vector<int> ans;
    void go(TreeNode* root, bool ok){
        if(!ok)ans.push_back(root->val);
        ok = root->left != NULL && root->right !=NULL;
        if(root->left!=NULL)go(root->left,ok);
        if(root->right!=NULL)go(root->right,ok);
    }

    vector<int> getLonelyNodes(TreeNode* root) {
        bool ok = root->left !=NULL && root->right !=NULL;
        if(root->left == NULL && root->right == NULL)return ans;
        if(root->left!=NULL) go(root->left,ok);
        if(root->right!=NULL) go(root->right,ok);
        return ans;
    }
};