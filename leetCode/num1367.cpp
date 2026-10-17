/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool listGo(ListNode* head, TreeNode* root){
        if(root==NULL)return 0;
        if(treeGo(head,root))return 1;
        return listGo(head,root->left)||listGo(head,root->right);
    }

    bool treeGo(ListNode* head, TreeNode* root){
        if(head==NULL) return 1;
        if(root==NULL) return 0;
        if(root->val != head->val)return 0;
        return treeGo(head->next,root->left) || treeGo(head->next,root->right);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root==NULL)return 0;
        return listGo(head,root);
    }
};