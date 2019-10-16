# 구현 과제
- 동적 배열 : 김주원
- 단일 연결리스트 : 유창연, 김진관
- 이중 연결리스트 : 최준호, 정기솔
- 순환 연결리스트 : 정민구, 정준오

# Dynamic Array (김주원) 코드 수정 필요

## 메모리 예약
### void reserve(const int& len);
- 길이 len의 int형 배열 메모리 공간을 확보한다.
- void reserve(const int& len, const int& data) 함수와 오버로딩 된다.
### void reserve(const int& len, const int& data);
- 길이 len의 int형 배열 메모리 공간을 확보하며, 모두 data로 초기화한다.
- void reserve(const int& len) 함수와 오버로딩 된다.
## 데이터 삽입
### void push_back(const int& data);
- 마지막 원소의 뒤에 data를 추가한다.
### void insertData(const int& index, const int& data);
- index번째 배열 공간에 data를 삽입한다.
### void insertDataAll(const int& data);
- 배열의 모든 공간을 data로 초기화한다.
## 데이터 접근
### const int& at(int index);
- index번째 원소의 데이터를 반환한다.
## 데이터 삭제
### void pop_back(void);
- 배열의 마지막 원소를 제거한다.
- 배열 공간이 확보되지 않았다면 오류 문구가 뜬다.

# LinkedList (유창연, 김진관)
- NULL

# DoubleLinkedList (최준호, 정기솔)
## Class Node
### private
- previous : 이전 노드의 주소를 가리킵니다.
- next : 다음 노드의 주소를 가리킵니다.
- data : 노드에 저장되는 데이터

### public
- 생성자 : 변수들을 초기화 시킵니다.
- 설정자/접근자 : private로 지정된 변수에 접근할 수 있도록 도와줍니다.
- linkFront() : 기존 노드 앞부분에 새로 삽입된 노드의 주소와 연결합니다.
- linkBack() : 기존 노드 뒷부분에 새로 삽입된 노드의 주소와 연결합니다.
- removeFront() : 해당 노드 앞부분의 노드를 삭제합니다.
- removeBack() : 해당 노드 뒷부분의 노드를 삭제합니다.


## Class DLinkedList
### private
- head : 리스트의 가장 앞 부분을 나타냅니다.
- tail : 리스트의 가장 뒷 부분을 나타냅니다.
- size : 리스트의 크기를 나타냅니다.

### public
- 생성자 : 변수들을 초기화 시켜 줍니다. head와 tail을 연결합니다.
- 소멸자 : delete
- insertFront(position, data) : 해당 position의 앞 부분에 노드를 삽입한다.
- insertBack(position, data) : 해당 position의 뒷 부분에 노드를 삽입한다.
- pushFront(data) : 리스트의 가장 앞 부분(Head)에 노드를 삽입한다.
- pushBack(data) : 리스트의 가장 뒷 부분(Head)에 노드를 삽입한다.
- remove(position) : 해당 position의 노드를 삭제한다.
- search(data) : 해당 데이터를 가지고 있는 노드의 인덱스를 반환합니다. (0 base)
- clear : 동적할당된 데이터들을 초기화 시킵니다.
- print : 리스트 내부 값들을 출력한다.


# Circular Linked List (정민구, 정준오)
- NULL
