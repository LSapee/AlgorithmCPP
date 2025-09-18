class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            bool check = false;
            for(int j=0; j<strs[i].size(); j++){
                if(strs[i][j]<'0'||strs[i][j]>'9'){
                    check=true;
                    break;
                }
            }
            if(check){
                ans = max(ans,(int)strs[i].size());
            }else{
                ans = max(ans,stoi(strs[i]));
            }
        }
        return ans;
    }
};