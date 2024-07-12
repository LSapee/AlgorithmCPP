class Solution {
public:
    int ans =0;
    pair<string,bool> ok(string s,int x,int y){
        stack<char> stk;
        stack<char> stk2;
        string sx = "ab";
        string sy = "ba";
        int sum =0;
        if(x<y){
            swap(x,y);
            swap(sx,sy);
        }
        for(int i=0; i<s.size(); i++)stk.push(s[i]);
        while(!stk.empty()){
            char a = stk.top(); stk.pop();
            if(!stk.empty() && a==sx[1] && stk.top()==sx[0]){
                sum+=x;
                stk.pop();
                if(!stk2.empty()){
                    stk.push(stk2.top());
                    stk2.pop();
                }
            }else{
                stk2.push(a);
            }
        }
        while(!stk2.empty()){
            stk.push(stk2.top()); stk2.pop();
        }
        while(!stk.empty()){
            char a = stk.top(); stk.pop();
            if(!stk.empty() && a==sy[1]&&stk.top()==sy[0]){
                sum+=y;
                stk.pop();
                if(!stk2.empty()){
                    stk.push(stk2.top());
                    stk2.pop();
                }
            }else{
                stk2.push(a);
            }
        }
        string temp ="";
        while(!stk2.empty()){
            temp += stk2.top(); stk2.pop();
        }
        if(sum!=0){
            ans+=sum;
            return {temp,true};
        }
        return {temp,false};
    }

    int maximumGain(string s, int x, int y) {
        bool check =true;
        while(check){
            pair<string,bool> r = ok(s,x,y);
            s = r.first;
            cout<<s<<"\n";
            check = r.second;
        }
        return ans;
    }
};