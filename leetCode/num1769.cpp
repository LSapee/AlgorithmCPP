class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> isballBoxIndex;
        vector<int> ans;
        for(int i=0; i<boxes.size(); i++){
            if(boxes[i]=='1')isballBoxIndex.push_back(i);
        }
        for(int i=0; i<boxes.size(); i++){
            int temp = 0;
            for(int j=0; j<isballBoxIndex.size(); j++){
                temp += abs(isballBoxIndex[j]-i);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};