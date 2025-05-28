# 백준 플레티넘 등급 달성 - 2025.05.27

## 각 온라인 저지 사이트 별 문제 풀이 현황 -2025.05.27

### 국내

- 백준 : 934 문제 [프로필 보기](https://www.acmicpc.net/user/tkvl94)
- 프로그래머스 : 454 문제

### 해외

- leetcode : 518 문제 [프로필 보기](https://leetcode.com/u/dlworhks94/)
- paiza : 310 문제 

# 회고 <b style="font-size:50%">[GPT요약본으로](#GPT의-회고-정리)</b> 
처음에는 취업을 위해서 자바로 <b style="color:red; font-size:150%">코딩테스트</b> 무작정 문제를 풀기 시작 했던 것이 <b style="color:red; font-size:150%">알고리즘</b> 공부의 시작 이였다.
백준의 "단계별 풀어 보기"부터 문제를 풀다가 프로그래머스라는 사이트를 알게 되어 프로그래머스의 1레벨 문제를 풀거나 모르면 답을 찾아보고 해결 방법을 알아 보면서 성장하고 있었다. 그러다 <b style="color:red; font-size:150%">스택</b>이라는 <b style="color:red; font-size:150%">자료구조</b>를 만났다.
정말 큰 위기 였다. 이때 까지는 학원에서 배운 간단한 내용으로 모든 것들이 설명이 되 되었데. 모르는 것이 툭 튀어 나오더니 해당 자료구조를 써야만 한다고 하니 "<b style="color:red; font-size:150%">이건 뭐지?</b>" 싶었다.
이 때 부터가 자료구조와 알고리즘에 대한 내용을 찾아 보고 학습을 재대로 된 학습을 시작했 던 것 같다.<br/>
자료구조와 알고리즘을 찾아 보고 학습을 시작 한지 얼마 안되어 또 <b style="color:red; font-size:150%">위기</b>가 찾아 왔다. <b style="color:red; font-size:150%">재귀</b>라는 것이 었다.

```
int fibo(int num){
    if(num<=1) return 1;
    return fibo(num-1)+fibo(num-2);
}
```
피보나치 수열에 대한 재귀 코드 이다. 당시에는 유튜브 강의나 책을 찾아 봐도 귀납법이 어쩌구 하는데 이게 뭐라는 건지 이해가 안 갔다. 그래서 <b style="color:red; font-size:150%">재귀</b>는 나중에 보면 되겠지 하면서 <b style="color:red; font-size:150%">그래프</b>탐색의 일종인 <b style="color:red; font-size:150%">BFS</b>를 학습하였다.
<b style="color:red; font-size:150%">BFS</b>를 처음 접했을 때는 정말 좋았다. <b style="color:red; font-size:150%">재귀</b>라는 것은 작동 원리도 이해가 안가고 힘든어 보인다 하고 있는데 <b style="color:red; font-size:150%">BFS</b>는 단순 하게 순서 대로 들어 와서 분신술을 써서 갈수 있는 칸으로 전진 해 나가는 식의 방법이 였기에 이해 하기가 쉬웠다.
이때는 한동안 처음 접할 때 <b style="font-size:150%">[토마토](https://www.acmicpc.net/problem/7576)</b> 같은 문제의 <b style="color:red; font-size:150%">BFS</b>문제만 풀었다. 하지만 <b style="color:red; font-size:150%">BFS</b>풀다 가도 <b style="color:red; font-size:150%">위기</b>가 찾아 왔다. <b style="font-size:150%">[DFS와 BFS](https://www.acmicpc.net/problem/1260)</b>문제를 접하게 되었다.
이때 한동안 기억의 저 편으로 보내놨 던 <b style="color:red; font-size:150%">재귀</b>의 존재가 다시 등장 했다. 하지만 이때는 DFS를 풀면서 <b style="color:red; font-size:150%">스택</b>을 사용하여 푸는 방법과 <b style="color:red; font-size:150%">재귀</b>를 사용하여 푸는 방법을 학습하였고, 이로 인하여 <b style="color:red; font-size:150%">재귀</b>에 대해서 조금 이해가 되었던 것 같다.
이후 <b style="color:red; font-size:150%">다이나믹 프로그래밍</b> 통칭 <b style="color:red; font-size:150%">DP</b>라는 것을 공부 하게 되 었으며, 원리는 정말 심플 하게 <b style="color:red; font-size:150%">1번 연산 하였던 것을 저장 하였다 사용하는 방법으로 불 필요한 중복 연산을 줄여 빠른 시간으로 해결 하는 것</b>으로 원리는 이해는 비교적으로 간단했다.
```
int fibo(int k){
    vector<int> arr(k+1,0);
    // base
    arr[0] =1;
    arr[1] =1;
    for(int i=2; i<=k; i++){
        arr[i] = arr[i-2]+arr[i-1];
    }
    return k;
}
```
피보나치 수열의 DP 코드 이다. 시작 지점을 정하고 <b style="color:red; font-size:150%">점화식</b>을 새워서 계산 하면 된다는 설명은 정말 간단하고 알기 쉬웠다. 좀 더 쉽게 말하면 <b style="color:red; font-size:150%">규칙</b>만 찾으면 해당 규칙을 가지고 점화식을 만들면 되는 것이라 생각 했기 때문이 였다.
하지만 현실은 생각과 달리 규칙을 찾기가 생각보다 어려 웠으며 규칙을 찾았다 해도 어떻게 적용 해야 하는지 막막 하기만 하였고, 그래서 또 <b style="color:red; font-size:150%">BFS</b>로 회피를 시도했다.
아마 이 때 백준사이트에 있는 실버1~골5의 <b style="color:red; font-size:150%">토마토</b>같은 유형의 BFS를 다 풀었던 것으로 기억 하고 있다. 그리고 <b style="color:yellow; font-size:150%">leetcode</b>에 가서 문제를 풀기 시작하였다.
<b style="color:yellow; font-size:150%">leetcode</b>는 정말 좋은 사이트였다. <b style="color:yellow; font-size:150%">leetcode</b>는 틀리면 어떤 케이스에서 틀리는지 알려주다 보니 <b style="color:red; font-size:150%">맞왜틀?</b>을 하던게 <b style="color:red; font-size:150%">아 저런 케이스의 예외가 있었네? 내가 어떻게 해결 해야할 까?</b>를 생각 하고 있었다. 
또한 <b style="color:red; font-size:150%">내가 생각한 테스트케이스에 대한 확인 방법</b>이 쉬웠다. <b style="color:yellow; font-size:150%">백준</b>의 경우 IDE에서 실행 및 생각하여 내가 결과를 보고 해당값 나오는 게 정답 인지 직접 판단 해야 했다. <b style="color:yellow; font-size:150%">프로그래머스</b>의 경우는 원하는 테스트 데이터와 해당 결과로 나와야할 값을 직접 계산해서 넣어야했다.
하지만 <b style="color:yellow; font-size:150%">leetcode</b>는 달랐다. 생각한 테스트케이스에 대해서 입력하면 <b style="color:red; font-size:150%">결과값</b>은 <b style="color:yellow; font-size:150%">leetcode</b>에서 알아서 계산 하여 해당 <b style="color:red; font-size:150%">테스트케이스</b>를 통과 하는지 알려 주는 기능 그리고 <b style="color:red; font-size:150%">문제 풀이</b>가 존재 하여 따로 찾아 보지 않아도 되는 점이 <b style="color:red; font-size:150%">신세계</b> 였다.
그래서 한동안은 <b style="color:yellow; font-size:150%">leetcode</b>에서 문제를 풀거나 문제 풀이를 보면서 학습을 이어 나갔다.

# GPT의 회고 정리

## 알고리즘 공부의 시작
취업을 위해 자바로 코딩테스트 문제를 무작정 풀기 시작한 것이 알고리즘 공부의 시작이었습니다.
백준의 "단계별 풀어보기"부터 시작해서, 프로그래머스도 알게 되어 1레벨 문제부터 차근차근 풀었습니다.
모르는 문제는 답을 찾아보고, 해결 방법을 익히며 점차 성장했습니다.

## 자료구조와의 첫 만남
그러다 스택이라는 자료구조를 만났습니다.
이때까지는 학원에서 배운 내용으로 모든 것이 설명되었지만, 스택처럼 처음 보는 개념이 등장하자 큰 위기를 느꼈습니다.
이때부터 자료구조와 알고리즘에 대해 본격적으로 찾아보고 학습을 시작했습니다.

## 재귀와의 부딪힘
얼마 지나지 않아 또 다른 위기가 찾아왔습니다.
바로 재귀였습니다.
피보나치 수열을 재귀로 푸는 코드를 보며, 유튜브 강의나 책을 찾아봐도 "귀납법" 같은 말이 어렵게 느껴졌습니다.
그래서 일단 재귀는 뒤로 미루고, BFS를 먼저 학습했습니다.

## BFS와의 첫 사랑
BFS는 처음 접했을 때 정말 매력적이었습니다.
재귀는 작동 원리도 이해가 안 되고 어렵게 느껴졌지만, BFS는 단순하게 순서대로 탐색하며 분신술처럼 확장해가는 방식이라 이해하기 쉬웠습니다.
이후 한동안 토마토 같은 BFS 문제만 풀었습니다.

## DFS와 재귀의 귀환
하지만 DFS와 BFS 문제를 접하면서, 잊고 있던 재귀가 다시 등장했습니다.
이때는 스택을 사용한 DFS와 재귀를 사용한 DFS를 모두 학습하면서, 재귀에 대한 이해도가 조금씩 생겼습니다.

## DP(다이나믹 프로그래밍)와의 만남
이후 다이나믹 프로그래밍(DP)을 공부하게 되었습니다.
원리는 간단하게 "한 번 연산한 것을 저장해두고, 불필요한 중복 연산을 줄여 빠르게 해결하는 것"이었습니다.
피보나치 수열을 DP로 푸는 코드를 보며, 시작 지점을 정하고 점화식을 세우면 된다는 설명이 이해하기 쉬웠습니다.
하지만 실제로 규칙을 찾고 적용하는 것은 생각보다 어려웠고, 그래서 또 BFS로 회피하기도 했습니다.

## 다양한 플랫폼의 장단점
백준과 프로그래머스, 그리고 leetcode에서 문제를 풀며 각 플랫폼의 장단점을 체감했습니다.
특히 leetcode는 틀린 케이스를 바로 알려주고, 내가 생각한 테스트케이스를 쉽게 확인할 수 있어 매우 좋았습니다.


# 작성하면서 느낀점 및 앞으로

- 회상 하면서 글을 작성 하면서 보니 참 많이 발전한 것 같아요.
- 백준의 실버5 문제 풀려고 하면 이건 뭐지? 어떻게 풀어야할까? 무슨 알고리즘일까? 이런 생각도 없이 그냥 무작정 코드 작성 제출 눌렀던 제가 이제는 이건 N의 범위 M의 범위 등에 따라 시간 복잡도를 계산 하고 있다는 것이 뭔가 신기한 기분이 드네요.

- 앞으로는 leetcode 데일리 문제 위주로 풀고 취업을 1순위로 다른 것들을 준비해야겠어요.





