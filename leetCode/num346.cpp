class MovingAverage {
#define mx 10000000
public:
    vector<int> arr;
    int my = 0;
    MovingAverage(int size) {
        arr.resize(size,mx);
    }

    double next(int val) {
        if(my==arr.size())my=0;
        arr[my] = val;
        my++;
        double sum = 0.0;
        double cnt =0.0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==mx)break;
            sum+=arr[i];
            cnt++;
        }
        cout.precision(5);
        double ans = sum/cnt;
        return ans;
    }
};