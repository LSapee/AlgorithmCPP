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
    void go(TreeNode* root,int targetSum, vector<int> temp, int sum){
        temp.push_back(root->val);
        if(root->left!=nullptr) go(root->left,targetSum,temp,sum+root->val);
        if(root->right!=nullptr) go(root->right,targetSum,temp,sum+root->val);
        // 중간 노드에서는 안되고 리프일때 합이 targetSum이랑 같아야함.
        if((root->left == nullptr &&root->right ==nullptr)&& targetSum==sum+root->val){
            ans.push_back(temp);
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return ans;
        vector<int> temp;
        go(root,targetSum,temp,0);
        return ans;
    }
};