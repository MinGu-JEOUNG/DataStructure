#include <iostream>
using namespace std;

class Node {
private:
	int data;
	Node* next; //다음것을 가리키는 주소

public:
	Node()=default;
	Node(int value) {
		data = value;
	}
	~Node() {}

	int getData() {
		return data;
	}
	Node* getNext() { return next; }
	void setData(int n) {
		Node(n);
	}
	void linkNext(Node* ptr) {
		next = ptr;
	}
	void unlinkNext(Node* ptr) {
		next = nullptr;
	}
};

class CLL {
private:
	Node* head;
	Node* tail;
	int size; //인덱스
public:
	CLL() : size(0), head(nullptr), tail(nullptr) {}
	~CLL();

	int peekFront();
	int peekRear();
	int getSize();
	bool isEmpty();

	//추가
	void pushFront(int) {
		Node* ptr1 = new Node(); //새로운 노드 생성
		if (size == 0) {
			head = ptr1;
			tail = ptr1;
			ptr1->linkNext(ptr1);
			size++;
		}

		else {
			tail = ptr1;
		}
	}
	void insert(int, int) {
		
	}
	void pushRear(int);

	//삭제
	void popFront();
	void popRear();
	void remove(int);

	//검색
	bool find(int);
};