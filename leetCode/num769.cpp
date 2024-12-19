class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n =arr.size();
        stack<int> stk;
        for(int i=0; i<n; i++){
            if(stk.empty()||arr[i]>stk.top()) stk.push(arr[i]);
            else{
                int mx =stk.top();
                while(!stk.empty() && arr[i]<stk.top())stk.pop();
                stk.push(mx);
            }
        }
        return stk.size();
    }
};