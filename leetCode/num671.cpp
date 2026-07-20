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
    int findSecondMinimumValue(TreeNode* root) {
        set<int> st;
        queue<TreeNode*> Q;
        if(root==NULL)return -1;
        Q.push(root);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            int a =cur->val;
            if(st.find(a)==st.end())st.insert(a);
            if(cur->left!=NULL)Q.push(cur->left);
            if(cur->right!=NULL)Q.push(cur->right);
        }
        if(st.size()<2)return -1;
        int cnt =0;
        for(auto a:st){
            cnt++;
            if(cnt==2)return a;
        }
        return -1;
    }
};