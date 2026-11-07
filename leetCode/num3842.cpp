class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> On;
        vector<int> ans;
        for(int a: bulbs){
            if(On.find(a) == On.end()){
                On.insert(a);
            }else On.erase(a);
        }
        for(int a: On)ans.push_back(a);
        return ans;
    }
};