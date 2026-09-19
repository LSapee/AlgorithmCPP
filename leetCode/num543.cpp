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
    int goT(TreeNode* root){
        if(root == NULL) return 0;
        queue<pair<TreeNode*,int>> Q;
        Q.push({root,1});
        int temp = 0;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            temp = max(temp,cur.second);
            if(cur.first->left !=NULL) Q.push({cur.first->left,cur.second+1});
            if(cur.first->right !=NULL) Q.push({cur.first->right,cur.second+1});
        }
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        vector<TreeNode*> arr;
        queue<TreeNode*> Q;
        Q.push(root);
        int D = goT(root->left) + goT(root->right);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            if(cur->left!=NULL && cur->right !=NULL)arr.push_back(cur);
            if(cur->left !=NULL) Q.push(cur->left);
            if(cur->right !=NULL) Q.push(cur->right);
        }
        for(int i=0; i<arr.size(); i++) D = max(D,goT(arr[i]->left) + goT(arr[i]->right));

        return D;
    }
};