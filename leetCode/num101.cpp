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
    vector<TreeNode*> arr;
    vector<TreeNode*> arr2;
    TreeNode* temp = new TreeNode(-1000);

    void leftCheck(TreeNode* root){
        if(root == nullptr){
            arr.push_back(temp);
            return ;
        }
        leftCheck(root->left);
        leftCheck(root->right);
        arr.push_back(root);
    }
    void rightCheck(TreeNode* root){
        if(root == nullptr){
            arr2.push_back(temp);
            return ;
        }
        rightCheck(root->right);
        rightCheck(root->left);
        arr2.push_back(root);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root->left&&!root->right)return true;
        if(!root->left ||!root->right) return false;
        TreeNode* leftStart = root->left;
        TreeNode* rightStart = root->right;
        if(leftStart->val==rightStart->val){
            leftCheck(leftStart);
            rightCheck(rightStart);
        }else{
            return false;
        }
        if(arr.size() != arr2.size()) return false;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]->val!=arr2[i]->val)return false;
        }
        return true;
    }
};