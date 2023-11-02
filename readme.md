# 1주차 문자열, 누적합, 구현

### 시간복잡도

시간복잡도란 입력크기에 대해 어떠한 알고리즘이 실행되는데 걸리는 시간이며 주요로직의 반복횟수를 중점으로 측정된다.

### 빅오표기법

빅오 표기법(Big - O notation) 이란 복잡도에 가장 영향을 많이 끼치는 항의 상수인자를 빼고 나머지 항을 없애서 복잡도를 나타내는 표기법이다.

![Untitled](1%E1%84%8C%E1%85%AE%E1%84%8E%E1%85%A1%20%E1%84%86%E1%85%AE%E1%86%AB%E1%84%8C%E1%85%A1%E1%84%8B%E1%85%A7%E1%86%AF,%20%E1%84%82%E1%85%AE%E1%84%8C%E1%85%A5%E1%86%A8%E1%84%92%E1%85%A1%E1%86%B8,%20%E1%84%80%E1%85%AE%E1%84%92%E1%85%A7%E1%86%AB%20f49db29762cf4de38c8ade32af74683e/Untitled.png)

### 자료구조의 시간복잡도

**배열(Array)**

- 참조 : O(1)

- 탐색 : O(n)

**배열(vector)**

- 참조 : O(1)

- 탐색 : O(n)

- 맨 끝, 앞에 삽입/삭제 : O(1)

- 중간에 삽입 / 삭제 : O(n)

**스택(stack)**

- n번째 참조 : O(n)
- 가장 앞부분 참조 : O(1)
- 탐색 : O(n)
- 삽입 / 삭제(n번째 제외) : O(1)

**큐(queue)**

- n번째 참조 : O(n)
- 가장 앞부분 참조 : O(1)
- 탐색 : O(n)
- 삽입 / 삭제(n번째 제외) : O(1)

**연결리스트(doubly linked list)**

- 참조 : O(n)

- 탐색 : O(n)

- 삽입 / 삭제 : O(1)

**맵(map)**

- 참조 : O(logn)

- 탐색 : O(logn)

- 삽입 / 삭제 : O(logn)

![Untitled](1%E1%84%8C%E1%85%AE%E1%84%8E%E1%85%A1%20%E1%84%86%E1%85%AE%E1%86%AB%E1%84%8C%E1%85%A1%E1%84%8B%E1%85%A7%E1%86%AF,%20%E1%84%82%E1%85%AE%E1%84%8C%E1%85%A5%E1%86%A8%E1%84%92%E1%85%A1%E1%86%B8,%20%E1%84%80%E1%85%AE%E1%84%92%E1%85%A7%E1%86%AB%20f49db29762cf4de38c8ade32af74683e/Untitled%201.png)

### 공간복잡도

공간복잡도란 입력크기에 대해 어떠한 알고리즘이 실행되는데 필요한 메모리 공간의 양이다.

### 누적합

```cpp
#include<bits/stdc++.h>
using namespace std;      
int a[100004], b, c, psum[100004], n ,m;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m; 
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		psum[i] = psum[i - 1] + a[i]; 
	}
	for(int i = 0 ; i < m; i++){
		cin >> b >> c; 
		cout << psum[c] - psum[b - 1] << "\n";
	} 
	return 0;
}
```
