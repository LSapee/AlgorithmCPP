class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        vector<int> arr;
        int ans =1;
        for(int i=0; i<n; i++){
            arr.assign(26,0);
            for(int j =i; j<n; j++){
                arr[s[j]-'a']++;
                int temp = arr[s[j]-'a'];
                bool ok = false;
                for(auto a: arr){
                    if(a==0)continue;
                    if(temp!=a){
                        ok =true;
                        break;
                    }
                }
                if(!ok)ans = max(ans,j-i+1);
            }
        }
        return ans;
    }
};