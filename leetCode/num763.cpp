class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ahp(26,0);
        int n =s.size();
        for(int i=0; i<n; i++)ahp[s[i]-'a']=i;
        int ed =0,st=0;
        vector<int> partitions;
        for(int i=0; i<n; i++){
            ed = max(ed,ahp[s[i]-'a']);
            if(i==ed){
                partitions.push_back(i-st+1);
                st= i+1;
            }
        }
        return partitions;
    }
};