class Solution {
public:
    string go(string ss, int k){
        string temp = "";
        int n = ss.size();
        for(int i=0; i<n; i=i+k){
            int A = 0;
            for(int j=i; j<i+k && j<n; j++){
                A+= ss[j]-'0';
            }
            temp+=to_string(A);
        }
        return temp;
    }

    string digitSum(string s, int k) {
        string SS = s;
        while(SS.size()>k) SS = go(SS,k);
        return SS;
    }
};

