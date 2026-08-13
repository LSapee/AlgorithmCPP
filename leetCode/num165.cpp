class Solution {
public:
    void mkv(string s,vector<int> &arr){
        string temp = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='.'){
                arr.push_back(stoi(temp));
                temp ="";
            }else{
                temp+=s[i];
            }
        }
        if(temp.size()!=0)arr.push_back(stoi(temp));
        return ;
    }

    int compareVersion(string version1, string version2) {
        vector<int> v1,v2;
        string temp = "";
        mkv(version1,v1);
        mkv(version2,v2);
        int n = min(v1.size(),v2.size());
        for(int i=0; i<n; i++){
            if(v1[i]<v2[i])return -1;
            else if(v1[i]>v2[i])return 1;
        }
        if(v2.size() > v1.size()){
            int st = v1.size();
            while(st<v2.size()){
                if(v2[st]>0)return -1;
                st++;
            }
        }else if(v1.size()>v2.size()){
            int st = v2.size();
            while(st<v1.size()){
                if(v1[st]>0)return 1;
                st++;
            }
        }
        return 0;
    }
};