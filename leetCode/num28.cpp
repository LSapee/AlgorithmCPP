class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> arr;
        int ans =-1;
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i]== needle[0]) arr.push_back(i);
        }
        for(int i=0; i<arr.size(); i++){
            int k = arr[i];
            bool ok = true;
            for(int j=0; j<needle.size(); j++){
                if(haystack[k+j]!=needle[j]){
                    ok= false;
                    break;
                }
            }
            if(ok){ans=k; break;}
        }
        return ans;
    }
};