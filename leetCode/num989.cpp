class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n =num.size()-1;
        vector<int> ans;
        while(k!=0 && n!=-1){
            num[n]+=k;
            k=num[n]/10;
            num[n]%=10;
            n--;
        }
        if(k!=0){
            while(k/10!=0 || k%10!=0){
                ans.push_back(k%10);
                k/=10;
            }
            reverse(ans.begin(),ans.end());
        }
        for(int i=0; i<num.size(); i++)ans.push_back(num[i]);
        return ans;
    }
};