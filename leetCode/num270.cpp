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
    int closestValue(TreeNode* root, double target) {
        int k = (target - (int)target)  > 0.5 ? (int)target+1 : (int)target;
        int ans = 0;
        int t= INT_MAX;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            int x = abs(cur->val - k);
            if(x<t){
                ans = cur->val;
                t = x;
            }
            if(cur->left!=NULL)Q.push(cur->left);
            if(cur->right!=NULL)Q.push(cur->right);
        }
        return ans;
    }
};