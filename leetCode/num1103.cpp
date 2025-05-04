class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int i=0;
        while(candies>0){
            if(candies>=i+1){
                ans[i%num_people] +=i+1;
                candies-=i+1;
                i++;
            }else{
                ans[i%num_people]+=candies;
                break;
            }
        }
        return ans;
    }
};