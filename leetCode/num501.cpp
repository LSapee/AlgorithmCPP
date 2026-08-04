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
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int mx = 0;
        unordered_map<int,int> mp;
        queue<TreeNode*> Q;
        if(root!=NULL)Q.push(root);
        while(!Q.empty()){
            auto cur =Q.front(); Q.pop();
            mp[cur->val]++;
            if(mp[cur->val] > mx) mx = mp[cur->val];
            if(cur->left!=NULL) Q.push(cur->left);
            if(cur->right!=NULL) Q.push(cur->right);
        }
        for(auto a: mp){
            if(a.second==mx)ans.push_back(a.first);
        }
        return ans;
    }
};