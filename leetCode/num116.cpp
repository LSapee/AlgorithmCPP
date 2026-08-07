/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* ans = root;
        Node* tail = ans;
        if(!root) return ans;
        int depth = 1;
        int cnt = 0;
        queue<Node*> Q;
        Q.push(root);
        while(!Q.empty()){
            cnt++;
            auto cur = Q.front(); Q.pop();
            tail = cur;
            if(cnt==depth){
                tail->next = NULL;
                depth*=2;
                cnt =0;
            }else{
                if(!Q.empty()){
                    tail->next = Q.front();
                    tail = tail->next;
                }
            }
            if(cur->left!=NULL)Q.push(cur->left);
            if(cur->right!=NULL)Q.push(cur->right);
        }
        return ans;
    }
};