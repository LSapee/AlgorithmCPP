class Solution {
public:
    string RT(string temp){
        int n = temp.size();
        if(n<=2){
            for(int i=0; i<n; i++){
                if(temp[i]<=90)temp[i]+=32;
            }
        }else{
            temp[0] = temp[0]>90 ? temp[0]-32 : temp[0];
            for(int i=1; i<n; i++){
                if(temp[i]<=90)temp[i]+=32;
            }
        }
        return temp;
    }

    string capitalizeTitle(string title) {
        string ans = "";
        int n = title.size();
        string temp = "";
        for(int i=0; i<n; i++){
            if(title[i]==' '){
                ans+=RT(temp);
                ans+=" ";
                temp = "";
                continue;
            }
            temp+=title[i];
        }
        return ans+RT(temp);
    }
};