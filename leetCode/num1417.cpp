class Solution {
public:
    string reformat(string s) {
        vector<char> nums;
        vector<char> ss;
        for(int i=0; i<s.size();i++){
            if(s[i]>='0' &&s[i]<='9')nums.push_back(s[i]);
            else ss.push_back(s[i]);
        }
        if(abs((int)ss.size()-(int)nums.size())>1)return "";
        int k = ss.size();
        string ans ="";
        if(k==nums.size()){
            for(int i=0; i<k; i++){
                ans+=ss[i];
                ans+=nums[i];
            }
        }else if(k>nums.size()){
            for(int i=0; i<nums.size(); i++){
                ans+=ss[i];
                ans+=nums[i];
            }
            ans+=ss[k-1];
        }else{
            for(int i=0; i<k; i++){
                ans+=nums[i];
                ans+=ss[i];
            }
            ans+=nums[k];
        }
        return ans;
    }
};