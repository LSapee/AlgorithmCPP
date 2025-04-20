class Solution {
public:
    int numRabbits(vector<int>& answers) {
        vector<int> arr(1001,0);
        int ans =0;
        for(int i=0; i<answers.size(); i++){
            arr[answers[i]]++;
        }
        for(int i=0; i<1001; i++){
            ans += arr[i];
            if(arr[i]==0 || arr[i]%(i+1)==0)continue;
            int k = i+1;
            ans += k-(arr[i]%k);
        }
        return ans;
    }
};