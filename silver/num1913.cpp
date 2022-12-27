#include <bits/stdc++.h>
using namespace std;

int topOne[1][2] ={{0,1}};
int right[1][2] = {{1,0}};
int bottom[1][2] = {{0,-1}};
int left[1][2] = {{-1,0}};


int main(){

    int n,a,num;
    cin>>n>>a;
    int arr[n][n];
    fill(arr[0],arr[n],0);
    arr[0][0] = n*n;
    int q=0;
    int w=0;
    int count =1;
    while(arr[n/2][n/2]==0){
        num = arr[q][w]-1;
        while(n-count>q){
            q++;
            arr[q][w] =num;
            num = arr[q][w]-1;
        }
        while(n-count>w){
            w++;
            arr[q][w] =num;
            num = arr[q][w]-1;
        }
        while(count-1<q){
            q--;
            arr[q][w] =num;
            num = arr[q][w]-1;
        }
        while(count<w){
            w--;
            arr[q][w] =num;
            num = arr[q][w]-1;
        }

       count++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==a){
                q = i+1;
                w = j+1;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<< q << " "<<w;



    return 0;
}
