class FirstUnique {
public:
    //map은 해당 숫자가 몇번 들어왔는지 확인을 위해 배열을 사용하려다 메모리를 1억을 잡으면 메모리 초과가능성이 있기에 map을 사용
    map<int,int> m;
    // queue로 해당 숫자가 2번 이상 등장하면 유니크가 아니므로 pop() 처리

    // 처음에는 map 만 사용해서 타임 리미트 걸림 -> 이후 queue사용 해봄
    queue<int> Q;
    vector<int> ans;
    FirstUnique(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        ans = nums;
        for(int num:nums) {
            m[num]++;
            Q.push(num);
        }
    }

    int showFirstUnique() {
        while(!Q.empty() && m[Q.front()] >1){
            Q.pop();
        }
        return Q.size() ? Q.front() : -1;
    }

    void add(int value) {
        m[value]++;
        Q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */