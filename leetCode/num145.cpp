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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root == nullptr) return result;
        TreeNode* preNode = nullptr;
        stack<TreeNode*> stk;
        while(root!= nullptr || !stk.empty()){
            if(root!=nullptr){
                stk.push(root);
                root = root->left;
            }else {
                root = stk.top();
                if(root->right == nullptr || root->right == preNode){
                    result.push_back(root->val);
                    stk.pop();
                    preNode = root;
                    root = nullptr;
                }else{
                    root = root->right;
                }
            }
        }
        return result;
    }
};