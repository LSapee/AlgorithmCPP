#include <bits/stdc++.h>
using namespace std;
bool check[10];
bool checkRow(vector<vector<int>> &arr,int row){
    fill(check,check+10,false);
    for(int i=0; i<9; i++){
        if(check[arr[row][i]]) return false;
        else {
            check[arr[row][i]] =true;
        }
    }
    return true;
}
bool checkCol(vector<vector<int>> &arr,int col){
    fill(check,check+10,false);
    for(int i=0; i<9; i++){
        if(check[arr[i][col]])return false;
        else {
            check[arr[i][col]] =true;
        }
    }
    return true;
}
bool checkBox(vector<vector<int>> &arr,int index){
    fill(check,check+10,false);
    int row = index<3 ? index*3 : (index%3)*3;
    int col = index<3 ? index*3 : (index%3)*3;
    for(int i=col; i<col+3; i++){
        for(int j=row; j<row+3; j++){
            if(check[arr[i][j]])return false;
            else {
                check[arr[i][j]] = true;
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    for(int Case = 1; Case<=T; Case++){
        vector<vector<int>> arr(9,vector<int>(9,0));
        bool row = false;
        bool col = false;
        bool box = false;
        for(int i=0; i<9;i++){
            for(int j =0; j<9; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<9; i++){
            row = checkRow(arr,i);
            col = checkCol(arr,i);
            box = checkBox(arr,i);
            if(!row || !col || !box){
                cout<<"i : "<<i<<"\n";
                break;
            }
        }
        if(!row || !col || !box){
            cout<<"r : "<<row <<" col : "<<col <<" box : "<<box<<"\n";
            cout<<"Case "<<Case<<": INCORRECT\n";
        }else{
            cout<<"Case "<<Case<<": CORRECT\n";
        }
    }
    return 0;
}