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
    vector<int> arr;
    void search(TreeNode* root){
        arr.push_back(root->val);
        if(root->left != NULL)search(root->left);
        if(root->right != NULL)search(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        search(root);
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};