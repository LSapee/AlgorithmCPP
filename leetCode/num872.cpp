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
    vector<int> leaf1;
    vector<int> leaf2;
    void go(TreeNode* root){
        if(root==NULL) return;
        if(root->left !=NULL)go(root->left);
        if(root->right !=NULL)go(root->right);
        if(root->left == NULL && root->right == NULL)leaf1.push_back(root->val);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        go(root1);
        leaf2 = leaf1;
        leaf1 = vector<int>();
        go(root2);
        if(leaf1.size()!=leaf2.size())return false;
        for(int i=0; i<leaf1.size(); i++)if(leaf1[i]!=leaf2[i])return false;
        return true;
    }
};