/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void dfs(Node* root){
        if(root==nullptr)return ;
        if(root->children.size()==0){
            ans.push_back(root->val);
            return ;
        }
        for(auto k : root->children){
            dfs(k);
        }
        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        if(root==nullptr)return ans;
        dfs(root);
        return ans;
    }
};