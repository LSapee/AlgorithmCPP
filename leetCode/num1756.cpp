class MRUQueue {
public:
    deque<int> Q;
    MRUQueue(int n) {
        for(int i=1; i<=n; i++)Q.push_back(i);
    }

    int fetch(int k) {
        deque<int> temp;
        for(int i=1; i<k; i++){
            temp.push_back(Q.front());
            Q.pop_front();
        }
        int ans = Q.front();
        Q.pop_front();
        Q.push_back(ans);
        if(temp.size()>Q.size()){
            while(!Q.empty()){
                temp.push_back(Q.front());Q.pop_front();
            }
            Q= temp;
        }else{
            while(!temp.empty()){
                Q.push_front(temp.back());
                temp.pop_back();
            }
        }
        return ans;
    }
};

/**
 * Your MRUQueue object will be instantiated and called as such:
 * MRUQueue* obj = new MRUQueue(n);
 * int param_1 = obj->fetch(k);
 */