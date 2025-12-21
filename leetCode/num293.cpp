class Solution {
public:
    vector<string> generatePossibleNextMoves(string currentState) {
        vector<string> ans;
        int n = currentState.size()-1;
        for(int i=0; i<n; i++){
            if(currentState[i]=='+' && currentState[i+1]=='+'){
                currentState[i]='-';
                currentState[i+1]='-';
                ans.push_back(currentState);
                currentState[i]='+';
                currentState[i+1]='+';
            }
        }
        return ans;
    }
};