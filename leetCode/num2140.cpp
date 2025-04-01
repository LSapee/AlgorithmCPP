class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> arr(n,0);
        arr[n-1] = questions[n-1][0];
        long long ans =0;
        for(int i=n-2; i>=0; i--){
            // cur[0]은 점수 cur[1]은 nxt칸
            auto cur = questions[i];
            arr[i] = (long long)cur[0];
            int nxt = cur[1];
            if(i+nxt+1<n){
                arr[i] += (long long)arr[i+nxt+1];
            }
            arr[i] = max(arr[i],arr[i+1]);
        }
        return arr[0];
    }
};