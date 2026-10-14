
class Solution {
public:
    // sum 기준으로 15정도 그리고 num을 3으로 뒀을때 9 6 0 이 가장큰 것을 기반으로 그냥 9 9 9 9 .. 나가는것이 가장 좋다는 이유.
    string maxSumOfSquares(int num, int sum) {
        if(num*9<sum)return "";
        string ans;
        int n9 = sum/9;
        int rem = sum%9;
        int zeros = num - n9 -(rem ? 1:0);
        ans.reserve(num);
        ans.append(n9,'9');
        if(rem) ans.append(1,'0'+rem);
        if(zeros)ans.append(zeros,'0');
        return ans;
    }
};

// class Solution {
// public:
//     // sum 기준으로 15정도 그리고 num을 3으로 뒀을때 9 6 0 이 가장큰 것을 기반으로 그냥 9 9 9 9 .. 나가는것이 가장 좋다는 이유.
//     string maxSumOfSquares(int num, int sum) {
//         // if(num*9<sum)return "";
//         string ans = "";
//         while(num >0){
//             num--;
//             if(sum==0){
//                 ans+= "0";
//             }else if(sum>9) {
//                 ans+="9";
//                 sum-=9;
//             }else{
//                 ans+=to_string(sum);
//                 sum=0;
//             }
//         }
//         // 만약 sum을 만들지 못하는 경우에는 빈칸 반환 num*9 < sum 로 확인 가능하긴한데.
//         if(sum != 0 )return "";
//         return ans;
//     }
// };