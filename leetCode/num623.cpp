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
    void go(TreeNode* root,int val, int depth, int cur){
        if(depth-1 == cur){
            TreeNode* z = new TreeNode(val);
            TreeNode* zz = new TreeNode(val);
            if(root->left !=NULL)z->left = root->left;
            if(root->right != NULL) zz->right = root->right;
            swap(root->left,z);
            swap(root->right,zz);
            return ;
        }
        if(root->left !=NULL) go(root->left,val,depth,cur+1);
        if(root->right !=NULL) go(root->right,val,depth,cur+1);
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            TreeNode* z = new TreeNode(val);
            z->left = root;
            root= z;
        }else go(root,val,depth,1);
        return root;
    }
};
