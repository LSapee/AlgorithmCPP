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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        queue<TreeNode*> Q;
        if(root1!=NULL)Q.push(root1);
        if(root2!=NULL)Q.push(root2);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            ans.push_back(cur->val);
            if(cur->left!=NULL) Q.push(cur->left);
            if(cur->right!=NULL) Q.push(cur->right);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};