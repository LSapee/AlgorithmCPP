class ZigzagIterator {
public:
    vector<int> arr;
    int a =0;
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        int n = min(v1.size(),v2.size());
        int stv1 =0;
        int stv2 =0;
        for(int i=0; i<n; i++){
            if(v1.size() == 0 || v2.size()==0)break;
            arr.push_back(v1[stv1]);
            arr.push_back(v2[stv2]);
            stv1++;
            stv2++;
        }
        if(stv1 != v1.size()){
            while(stv1<v1.size())arr.push_back(v1[stv1++]);
        }else if(stv2 != v2.size())while(stv2<v2.size())arr.push_back(v2[stv2++]);
    }

    int next() {
        return arr[a++];
    }

    bool hasNext() {
        if(a>=arr.size())return false;
        return true;
    }
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */