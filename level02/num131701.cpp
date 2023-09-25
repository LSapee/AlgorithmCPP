#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;
int arr[1002][2002];
int solution(vector<int> elements) {
    set<int> nums;
    int sum =0;
    int ans =0;
    int n = elements.size();;
    for(int i=0; i<n; i++)arr[0][i] = elements[i];
    for(int i=n; i<n*2-1; i++) arr[0][i]= elements[i-n];
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = arr[i-1][j]+arr[i-i][j+i];
        }
    }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            nums.insert(arr[i][j]);

    return nums.size();
}