class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int allsum = 0;
        int n = skill.size()/2;
        for(int a :skill)allsum+=a;
        int target = allsum/n;
        sort(skill.begin(),skill.end());
        long long ans =0;
        for(int i=0;i<n; i++){
            if(target!=skill[i]+skill[n*2-1-i])return -1;
            ans+= skill[i]*skill[n*2-1-i];
        }
        return ans;
    }
};