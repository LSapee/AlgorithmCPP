class Solution {
public:
    bool check(vector<string> &arr,unordered_set<string> &st){
        for(auto a: arr)if(st.find(a)==st.end())return false;
        return true;
    }

    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> st;
        vector<string> ans;
        for(auto a : supplies)st.insert(a);
        while(1){
            int k = st.size();
            for(int i=0; i<recipes.size(); i++){
                if(st.find(recipes[i])!=st.end())continue;
                if(check(ingredients[i],st)){
                    st.insert(recipes[i]);
                    ans.push_back(recipes[i]);
                }
            }
            if(st.size()==k)break;
        }
        return ans;
    }
};