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

// 1. 최소값 설정 실수
// 2. depthArr 탐색을 전체 길이로 하다 보니 최대값이 음수인경우 0에서 문제 발생
// 3. mxDepth 설정하였으나 for문에서 i<mxDepth 로 하여 문제 발생
// 4. mxDepth 를 i<=mxDepth로 수정하여 통과
class Solution {
public:
    vector<int> depthArr;
    int mxDepth =0;
    void moveNxt(TreeNode* root, int depth){
        if(depth>mxDepth)mxDepth = depth;
        depthArr[depth]+=root->val;
        if(root->left !=NULL) moveNxt(root->left,depth+1);
        if(root->right !=NULL) moveNxt(root->right,depth+1);
    }
    int maxLevelSum(TreeNode* root) {
        depthArr.resize(10005,0);
        moveNxt(root,1);
        int mx = -999999999;
        int level = 0;
        for(int i=1; i<=mxDepth; i++){
            if(depthArr[i]>mx){
                mx = depthArr[i];
                level = i;
            }
        }
        return level;
    }
};