class Solution {
public:
    int n;
    int stob(string s){
        int a =0;
        int cur = n-2;
        int d =2;
        while(cur>=0){
            if(s[cur] == '1')a += d;
            d*=2;
            cur--;
        }
        if(s[n-1] =='1')a++;
        return a;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        n= nums.size();
        if(n==1) return nums[0][0] == '0' ? "1": "0"; 
        set<int> st;
        int ed = 2;
        string ans ="";
        for(int i=0; i<n-1; i++)ed *=2;
        for(int i=0; i<nums.size(); i++){
            int bt = stob(nums[i]);
            st.insert(bt);
        }
        int target = 0;
        for(int i=0; i<ed; i++){
            if(st.find(i)==st.end()){
                target =i;
                break;
            }
        }
        while(target > 0){
            ans = to_string(target%2)+ans;
            target/=2;
        }
        while(ans.size() <n) ans = "0" +ans;
        return ans;
    }
};