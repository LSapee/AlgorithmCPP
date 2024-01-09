#include <bits/stdc++.h>
using namespace std;

vector<int> lc(30);
vector<int> rc(30);
void preorder_traversal(int cur){
    cout<<char(cur+'A'-1);
    if(lc[cur]!=0)preorder_traversal(lc[cur]);
    if(rc[cur]!=0)preorder_traversal(rc[cur]);
}

void inorder_traversal(int cur){
    if(lc[cur]!=0)inorder_traversal(lc[cur]);
    cout<<char(cur+'A'-1);
    if(rc[cur]!=0)inorder_traversal(rc[cur]);
}
void postorder_traversal(int cur){
    if(lc[cur]!=0)postorder_traversal(lc[cur]);
    if(rc[cur]!=0)postorder_traversal(rc[cur]);
    cout<<char(cur+'A'-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        char c,l,r;cin>>c>>l>>r;
        if(l!='.') lc[c-'A'+1] = l-'A'+1;
        if(r!='.') rc[c-'A'+1] = r-'A'+1;
    }
    preorder_traversal(1);
    cout<<"\n";
    inorder_traversal(1);
    cout<<"\n";
    postorder_traversal(1);
}