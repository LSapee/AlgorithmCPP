class Solution {
public:
    bool isV(char a) {
        return a=='a' ||a=='e'||a=='i'||a=='o'||a=='u';
    }

    long long countOfSubstrings(string word, int k) {
        int cnt =0;
        long long ans =0;
        unordered_map<char,int> Vcnt;
        int st =0,ed=0;
        int n =word.size();
        vector<int> nxtC(n);
        int nxtNum = n;
        for(int i=n-1; i>=0; i--){
            nxtC[i] = nxtNum;
            if(!isV(word[i])){
                nxtNum=i;
            }
        }
        while(ed<n){
            char x = word[ed];
            if(isV(x)){
                Vcnt[x]++;
            }else{
                cnt++;
            }
            while(cnt>k){
                char stC = word[st];
                if(isV(stC)){
                    Vcnt[stC]--;
                    if(Vcnt[stC]==0){
                        Vcnt.erase(stC);
                    }
                }else{
                    cnt--;
                }
                st++;
            }
            while(st<n&&Vcnt.size()==5&&cnt==k){
                ans+=nxtC[ed]-ed;
                char stC = word[st];
                if(isV(stC)){
                    Vcnt[stC]--;
                    if(Vcnt[stC]==0){
                        Vcnt.erase(stC);
                    }
                }else{
                    cnt--;
                }
                st++;
            }
            ed++;
        }
        return ans;
    }
};

