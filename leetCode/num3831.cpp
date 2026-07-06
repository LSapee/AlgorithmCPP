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
    int levelMedian(TreeNode* root, int level) {
        if(level ==0) return root->val;
        queue<TreeNode*> Q;
        queue<int> Q2;
        int mxL =0;
        Q.push(root);
        Q2.push(mxL);
        vector<int> nums;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            auto curL = Q2.front(); Q2.pop();
            mxL = max(mxL,curL);
            if(curL == level)nums.push_back(cur->val);
            if(curL >level)continue;
            if(cur->left != NULL) {Q.push(cur->left);Q2.push(mxL+1);}
            if(cur->right != NULL) {Q.push(cur->right);Q2.push(mxL+1);}
        }
        if(mxL<level) return  -1;
        sort(nums.begin(),nums.end());
        int a = nums.size();
        return nums[a/2];
    }
};