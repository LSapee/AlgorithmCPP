// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long st = 0;
        long long ed = n;
        while(st<ed){
            int mid = (st+ed)/2;
            if(isBadVersion(mid)){
                ed =mid;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
};