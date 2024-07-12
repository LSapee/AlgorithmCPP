class Solution {
public:
    int cnt(TreeNode* root){
        int l=0;
        int r=0;
        if(root->left == nullptr && root->right==nullptr) return 1;
        if(root->left)l = cnt(root->left);
        if(root->right)r = cnt(root->right);
        return max(r,l)+1;
    }

    int maxDepth(TreeNode* root) {
        if(root== nullptr) return 0;
        return cnt(root);
    }
};