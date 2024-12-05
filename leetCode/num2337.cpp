class Solution {
public:
    bool canChange(string start, string target) {
        queue<pair<char,int>> stQ;
        queue<pair<char,int>> targetQ;
        for(int i=0; i<start.size(); i++){
            if(start[i]!='_'){
                stQ.push({start[i],i});
            }
            if(target[i]!='_'){
                targetQ.push({target[i],i});
            }
        }
        if(stQ.size()!=targetQ.size())return false;
        while(!stQ.empty()){
            pair<char,int> stCur = stQ.front();stQ.pop();
            pair<char,int> targetCur = targetQ.front();targetQ.pop();
            if(stCur.first!=targetCur.first ||(stCur.first =='L'&&stCur.second < targetCur.second)||(stCur.first=='R'&&stCur.second>targetCur.second))return false;

        }
        return true;
    }
};