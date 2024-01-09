#include <bits/stdc++.h>
using namespace std;

int main(){
//    용액1과2의 합한 값 ,용액 1,용액2
    vector<tuple<int,int,int>> tuple1;
    int n;
    cin>>n;
    vector<int> arr;
//    값 받아오기
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
//  정렬 최저 + 최고를 구하기 위해서
    sort(arr.begin(),arr.end());
    int left = 0;//용액 1
    int right = n-1;//용액 2
//   left <=right 는 같은 값을 2번 입력할 필요는 없음으로 제외
    while(left<right){
//        용액의 핪이 0이면 그냥 출력후 끝
        if(arr[left]+arr[right] ==0){
            cout<<arr[left]<<" "<<arr[right];
            return 0;
        }else if(arr[left]+arr[right]>0){
//            용액1 +용액2가 0보다 크면 용액2를 지금 값보다 1단계 낮은 값으로 변경 tuple에 용액1+용액2의 절대값 , 용액1, 용액2 저장
            tuple1.push_back(make_tuple(abs(arr[left]+arr[right]),arr[left],arr[right]));
            right--;
        }else if(arr[left]+arr[right]<0){
//            용액1 +용액2가 0보다 작을경우 용액1를 지금 값보다 1단계 큰 값으로 변경 tuple에 용액1+용액2의 절대값 , 용액1, 용액2 저장
            tuple1.push_back(make_tuple(abs(arr[left]+arr[right]),arr[left],arr[right]));
            left++;
        }
    }
    sort(tuple1.begin(),tuple1.end());

//    for(int i=0; i<tuple1.size(); i++){
//        cout<<get<0>(tuple1[i])<<" ";
//        cout<<get<1>(tuple1[i])<<" ";
//        cout<<get<2>(tuple1[i])<<"\n";
//    }
    cout<<get<1>(tuple1[0])<<" ";
    cout<<get<2>(tuple1[0])<<"\n";
    return 0;
}