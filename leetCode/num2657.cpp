class Solution {
public:
    int check(vector<int>& A,unordered_set<int> &st, vector<bool> &vis,int ed){
        int cnt =0;
        for(int i=0; i<=ed; i++){
            if(vis[i])continue;
            if(st.find(A[i])!=st.end()){
                vis[i]= true;
                cnt++;
            }
        }
        return cnt;
    }

    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> st;
        vector<int> ans;
        vector<bool> vis(A.size(),false);
        if(A[0]==B[0]){ans.push_back(1); vis[0]=true;}
        else ans.push_back(0);
        st.insert(B[0]);
        for(int i=1; i<A.size(); i++){
            st.insert(B[i]);
            int k = ans[i-1] + check(A,st,vis,i);
            ans.push_back(k);
        }
        return ans;
    }
};