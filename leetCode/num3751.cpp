class Solution {
public:
    int check(int a){
        string s = to_string(a);
        int n = s.size();
        int temp =0;
        for(int i=1; i<n-1; i++){
            if(s[i]>s[i-1] &&s[i]>s[i+1] || s[i]<s[i-1] && s[i]<s[i+1])temp++;
        }
        return temp;
    }

    int totalWaviness(int num1, int num2) {
        int ans =0;
        for(int i =num1; i<=num2; i++){
            ans +=check(i);
        }
        return ans;
    }
};