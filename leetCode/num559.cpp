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
#define X first
#define Y second
    int maxDepth(Node* root) {
        if(root==NULL)return 0;
        queue<pair<Node*,int>> Q;
        Q.push({root,1});
        int ans =0;
        while(!Q.empty()){
            pair<Node*,int> cur = Q.front(); Q.pop();
            ans = cur.Y;
            if(cur.X->children.empty())continue;
            vector<Node*> nxt = cur.X->children;
            for(int i=0; i<nxt.size(); i++){
                Q.push({nxt[i],ans+1});
            }
        }
        return ans;
    }
};

// 단순 bfs문제