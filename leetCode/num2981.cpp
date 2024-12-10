class Solution {
public:
    vector<string> strArr;
    int ans =-1;
    bool check(string tempStr){
        for(int i=1; i<tempStr.size(); i++){
            if(tempStr[i]!=tempStr[i-1])return false;
        }
        int k =tempStr.size();
        ans = max(ans,k);
        return true;
    }

    int maximumLength(string s) {
        int n = s.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                strArr.push_back(s.substr(i,j-i));
            }
            strArr.push_back(s.substr(i,n-i));
        }
        unordered_map<string, int> mp;
        for(int i=0; i<strArr.size(); i++)mp[strArr[i]]++;
        bool ok =false;
        for(auto temp : mp){
            if(temp.second<3)continue;
            if(check(temp.first))ok= true;
        }
        if(ok)return ans;
        for(auto temp:mp){
            if(temp.second<3)continue;
            int k = temp.first.size();
            ans = max(ans,k);
        }
        return ans;
    }
};