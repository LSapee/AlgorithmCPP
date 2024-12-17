class Solution {
public:
    priority_queue<char> pq;
    int arrCnt[26];
    string repeatLimitedString(string s, int repeatLimit) {
        string ans ="";
        for(auto a : s)arrCnt[a-'a']++;
        int nxt = 24;
        for(int i=25; i>=0; i--){
            if(arrCnt[i]<=repeatLimit){
                ans.append(arrCnt[i],'a'+i);
                if(nxt ==i-1) nxt--;
            }else{
                if(nxt<0){
                    ans.append(repeatLimit,'a'+i);
                    break;
                }
                while(arrCnt[i]>0){
                    ans.append(min(repeatLimit,arrCnt[i]),'a'+i);
                    arrCnt[i]-=repeatLimit;
                    while(nxt>=0&&arrCnt[nxt]==0)nxt--;
                    if(nxt<0){
                        i=-1;
                        break;
                    }else if(arrCnt[i]>0){
                        arrCnt[nxt]--;
                        ans+='a'+nxt;
                    }
                }
                if(nxt==i-1)nxt--;
            }
        }
        return ans;
    }
};