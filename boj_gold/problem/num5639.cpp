#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void addTreeNode(TreeNode* p, TreeNode* c){
    if(p->val<c->val){
        if(!p->right){
            p->right=c;
        }else{
            addTreeNode(p->right,c);
        }
    }else if(p->val>c->val){
        if(!p->left){
            p->left=c;
        }else{
            addTreeNode(p->left,c);
        }
    }
}

void postOrderTraversal(TreeNode* node) {
    if (node == nullptr) return;
    postOrderTraversal(node->left);  // 왼쪽 자식 방문
    postOrderTraversal(node->right); // 오른쪽 자식 방문
    cout << node->val << '\n';        // 현재 노드 처리
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    TreeNode* root = new TreeNode(n);
    while(cin>>n){
        TreeNode* k = new TreeNode(n);
        addTreeNode(root,k);
    }
    postOrderTraversal(root);
    return 0;
}