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
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            arr.push_back(cur->val);
            if(cur->left!=NULL)Q.push(cur->left);
            if(cur->right!=NULL)Q.push(cur->right);
        }
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]+arr[j]==k)return true;
            }
        }
        return false;
    }
};