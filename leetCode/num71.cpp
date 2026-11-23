class Solution {
public:
    string simplifyPath(string path) {
        int n =path.size();
        string ans = "/";
        string temp = "";
        deque<string> DQ;
        for(int i=1; i<n; i++){
            if(path[i] == '/'){
                if(temp.size()==0)continue;
                if(temp == ".."){
                    if(!DQ.empty())DQ.pop_back();
                }else if(temp != ".")DQ.push_back(temp);
                temp = "";
            }else{
                temp+= path[i];
            }
        }
        if(temp.size()!=0){
            if(temp == ".." ){
                if(!DQ.empty())DQ.pop_back();
            }else if(temp != ".")DQ.push_back(temp);
        }
        while(!DQ.empty()){
            ans+= DQ.front();
            DQ.pop_front();
            if(!DQ.empty())ans+="/";
        }
        return ans;
    }
};