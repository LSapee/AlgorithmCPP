class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> cs;
        int cnt =0;
        for(int i=0; i<jewels.size(); i++)cs.insert(jewels[i]);
        for(int i=0; i<stones.size(); i++) if(cs.find(stones[i])!=cs.end())cnt++;
        return cnt;
    }
};