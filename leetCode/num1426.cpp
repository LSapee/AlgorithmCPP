class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> st;
        int n =arr.size();
        int ans =0;
        for(int i=0; i<n; i++)st.insert(arr[i]);
        for(int i=0; i<n; i++){
            if(st.find(arr[i]+1)!=st.end())ans++;
        }
        return ans;
    }
};