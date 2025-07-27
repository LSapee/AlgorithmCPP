class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.size();
        for(int i=0; i<n; i++){
            if(command[i] == 'G') ans+="G";
            else if(command[i] == '('){
                if(i<n-1 && command[i+1]==')')ans+="o";
            }else{
                if(command[i]==')')continue;
                ans+=command[i];
            }
        }
        return ans;
    }
};