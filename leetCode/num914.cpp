class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> mp;
        int n =deck.size();
        for(int i=0; i<n; i++)mp[deck[i]]++;
        vector<int> arr;
        for (auto i : mp) {
            arr.push_back(i.second);
        }
        int k = *min_element(arr.begin(),arr.end());
        if (k == 1) {
            return false;
        }
        int st=2;
        while(st<=k){
            bool ok = false;
            for(int j=0;j<arr.size();j++){
                if(arr[j]%st!=0){
                    ok = true;
                    break;
                }
            }
            st++;
            if(ok==false){
                return true;
            }
        }
        return false;
    }
};