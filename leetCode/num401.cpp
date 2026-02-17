class Solution {
public:
    string makeString(int a,int b){
        string s = to_string(a)+":"+(b<10?"0":"")+to_string(b);
        return s;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0; i<12; i++){
            for(int j =0; j<60; j++){
                if(__builtin_popcount(i) + __builtin_popcount(j)==turnedOn){
                    ans.push_back(makeString(i,j));
                }
            }
        }
        return ans;
    }
};