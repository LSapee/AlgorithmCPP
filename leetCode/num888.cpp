class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice =0,sumBob;
        for(int a: aliceSizes)sumAlice+= a;
        for(int a: bobSizes)sumBob+= a;
        int k = (sumBob-sumAlice)/2;
        set<int> st;
        for(int a : bobSizes) st.insert(a);
        for(int a :aliceSizes){
            if(st.find(a+k)!=st.end()){
                return {a,a+k};
            }
        }
        return {};
    }
};