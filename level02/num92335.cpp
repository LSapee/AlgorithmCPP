#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<long long> nums;
void makeV(string s){
    long long k =0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            k/=10;
            nums.push_back(k);
            k=0;
        }
        k+=s[i]-'0';
        k*=10;
    }
    if(k>0)nums.push_back(k/10);
}

bool findPrimeNum(long long e){
    if(e<=1) return false;
    if(e==2) return true;
    for(long long i=2; i<=sqrt(e); i++){
        if(e%i==0)return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string s ="";
    while(n>0){
        s = to_string(n%k)+s;
        n/=k;
    }
    makeV(s);
    for(int i=0; i<nums.size(); i++){
        bool ok =findPrimeNum(nums[i]);
        if(ok)answer++;
    }

    return answer;
}