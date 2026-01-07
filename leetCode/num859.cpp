class Solution {
public:
    int arr[26];
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if(n!=m)return false;
        if(s==goal){
            for(int i=0; i<n; i++)arr[s[i]-'a']++;
            for(int i=0; i<26; i++)if(arr[i]>1)return true;
            return false;
        }
        int a = -1;
        int b = -1;
        for(int i=0; i<n; i++){
            if(s[i]!=goal[i]){
                if(a ==-1) a= i;
                else if(b==-1) b= i;
                else return false;
            }
        }
        if(b==-1)return false;
        swap(s[a],s[b]);
        return s==goal;
    }
};