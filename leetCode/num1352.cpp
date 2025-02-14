class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() {
        arr.push_back(1);
    }

    void add(int num) {
        if(num==0){
            arr.clear();
            arr.push_back(1);
        }else {
            arr.push_back(arr[arr.size()-1]*num);
        }
    }

    int getProduct(int k) {
        return arr.size()<=k ? 0 : arr.back()/arr[arr.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */