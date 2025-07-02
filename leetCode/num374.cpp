/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long ed = n;
        long long st =1;
        while(st<=ed){
            long long mid = (st+ed)/2;
            if(guess(mid)==0) return mid;
            if(guess(mid)==-1) ed= mid-1;
            else st = mid+1;
        }
        return st;
    }
};
// 범위를... 항상 생각하자....