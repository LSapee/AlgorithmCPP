#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        multiset<int> st;
        for(int j=0; j<k; j++){
            char c;int num;cin>>c>>num;
            if(c=='I') st.insert(num);
            else if(st.size()!=0){
                if(num==-1) st.erase(st.begin());
                else {
                    auto ed = st.end();
                    st.erase(prev(ed));
                }
            }
        }
        if(st.size()==0) cout<<"EMPTY\n";
        else{
            auto it1 = st.begin();
            auto it2 = st.end();
            auto it3 = prev(it2);
            cout<<*it3<<" "<<*it1<<"\n";
        }
    }

}