class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        vector<string> s = {"1","2","3","4","5","6","7","8","9"};
        for(int i=0; i<9; i++){
            string temp = s[i];
            for(int j=i+1; j<9; j++){
                temp +=s[j];
                int k = stoi(temp);
                if(k>=low && k<=high) ans.push_back(k);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};