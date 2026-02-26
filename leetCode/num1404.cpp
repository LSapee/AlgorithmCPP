class Solution {
public:
    // 규칙성 10에서 /2하면 뒤에 0만 무시하면 된다 즉 나누기 연산시 1회
    // 11의 경우 1을 더하고 나눠줘야 한다 1을 더하면 100 그리고 다음으로 진행하려면 100에서 index[1]에 있는 0을 봐야하는데 그럼 뒤에있는 0도 없애기 처리하기 위해서 덧셈1회 나누기 1회가 들어간다.
    int numSteps(string s) {
        int n =s.size();
        int ans =0;
        for(int i=n-1; i>0; i--){
            if(s[i]=='0'){
                ans++;
                continue;
            }
            ans+=2;
            int nxtP = 1;
            int nxtIndex =i-1;
            // 1더해주기.
            while(nxtP && nxtIndex>=0){
                s[nxtIndex]++;
                if(s[nxtIndex]=='2'){
                    s[nxtIndex]='0';
                    nxtIndex--;
                }else{
                    nxtP=0;
                }
            }
            if(nxtP)ans++;
        }
        return ans;
    }
};