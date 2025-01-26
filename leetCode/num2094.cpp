class Solution {
public:
    unordered_set<int> st;
    bool vis[101];
    int n;
    void back(vector<int>& arr, string s){
        if(s.size()==3){
            if(stoi(s)%2==0&&stoi(s)>=100)st.insert(stoi(s));
            return ;
        }
        for(int i=0; i<arr.size(); i++){
            if(vis[i])continue;
            vis[i]=true;
            back(arr,s+to_string(arr[i]));
            vis[i]=false;
        }
    }

    vector<int> findEvenNumbers(vector<int>& digits) {
        n = digits.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)mp[digits[i]]++;
        vector<int> arr;
        for(auto a: mp){
            int k = a.second;
            if(k>3) k =3;
            for(int i=0; i<k; i++)arr.push_back(a.first);
        }
        back(arr,"");
        vector<int> ans;
        for(auto a: st)ans.push_back(a);
        sort(ans.begin(),ans.end());
        return ans;
    }
};