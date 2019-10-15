# DataStructure

## Dynamic Array 
### 메모리 예약
#### void reserve(const int& len);
- 길이 len의 int형 배열 메모리 공간을 확보한다.
- void reserve(const int& len, const int& data) 함수와 오버로딩 된다.
#### void reserve(const int& len, const int& data);
- 길이 len의 int형 배열 메모리 공간을 확보하며, 모두 data로 초기화한다.
- void reserve(const int& len) 함수와 오버로딩 된다.
### 데이터 삽입
#### void push_back(const int& data);
- 마지막 원소의 뒤에 data를 추가한다.
#### void insertData(const int& index, const int& data);
- index번째 배열 공간에 data를 삽입한다.
#### void insertDataAll(const int& data);
- 배열의 모든 공간을 data로 초기화한다.
### 데이터 접근
#### const int& at(int index);
- index번째 원소의 데이터를 반환한다.
### 데이터 삭제
#### void pop_back(void);
- 배열의 마지막 원소를 제거한다.
- 배열 공간이 확보되지 않았다면 오류 문구가 뜬다.
