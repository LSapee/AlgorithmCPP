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
    vector<string> arr;
    void go(TreeNode* root,string s){
        if(root->left == nullptr && root->right==nullptr){
            arr.push_back(s+to_string(root->val));
            return ;
        }
        if(root->left != nullptr)go(root->left,s+to_string(root->val));
        if(root->right != nullptr)go(root->right,s+to_string(root->val));
    }
    int stob(string s){
        long long b = 1;
        int ans = 0;
        for(int i = s.size()-1; i>=0; i--){
            ans+= (s[i]-'0')*b;
            b*=2;
        }
        return ans;
    }

    int sumRootToLeaf(TreeNode* root) {
        go(root, "");
        int ans =0;
        for(int i=0; i<arr.size(); i++){
            ans+= stob(arr[i]);
        }
        return ans;
    }
};