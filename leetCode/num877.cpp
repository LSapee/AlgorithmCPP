class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
// 조건 전체 개수는 홀 수이므로 무승부는 존재하지 않고 묶음은 항상 짝수 입니다.
// 항상 최적의 수를 둔다고 하였기에 엘리스 입장에서 자신이 시작 또는 마지막 돌을 가져 갔을 때 bob이 다음에 적게 가져가는 것을 계산 한다 생각하면 엘리스 필승
