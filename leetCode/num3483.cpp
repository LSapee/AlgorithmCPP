class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> st;
        int n = digits.size();
        for(int i=0; i<n; i++){
            if(digits[i]==0)continue;
            int temp = digits[i]*100;
            for(int j=0; j<n; j++){
                if(j==i)continue;
                temp+=digits[j]*10;
                for(int k=0; k<n; k++){
                    if(i==k || j==k)continue;
                    temp+=digits[k];
                    if(temp%2==0)st.insert(temp);
                    temp-=digits[k];
                }
                temp-=digits[j]*10;
            }
        }
        return st.size();
    }
};