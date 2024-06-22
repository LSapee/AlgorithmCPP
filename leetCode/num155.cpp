class MinStack {
public:
    vector<int> arr;
    int end =0;
    MinStack() {
        arr.resize(0);
    }

    void push(int val) {
        if(arr.size()>end) arr[end] = val;
        else arr.push_back(val);
        end++;
    }

    void pop() {
        if(end==0)return ;
        end--;
    }

    int top() {
        return arr[end-1];
    }

    int getMin() {
        int mn = INT_MAX;
        for(int i=0; i<end; i++) mn= min(mn,arr[i]);
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */