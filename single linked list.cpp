#include<iostream>
using namespace std;

//삽입 : 1. 마지막에 이어서 삽입할 것인가? ( 리스트 내에 노드가 있는가? 없는가? ) , 2. 중간에 끼워넣을 것인가?
//삭제 : n번쨰 노드 삭제 ( 삭제되는 노드의 next주소를 복사해둔다 -> 노드를 삭제한다 -> 이전 노드의 next주소를 복사해둔 주소로 변경한다 ) 
//탐색 : n번째 노드 출력 ( 저장된 값은 기본, 다음 노드주소..? )
class Node
{
	friend class List;
private:
	int value;
	Node* next;
	Node(int val, Node* p) : value(val), next(p) {}
};
class List
{
public:
	List() : head(NULL), tail(NULL), size(0) {};

	void add(int val)
	{
		Node* newNode = new Node(val, NULL);
		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;
		tail = newNode;
		size++;
	}
	void insert(int n)
	{

	}
	void print();
	~List();
private:
	Node* head;
	Node* tail;
	Node size;

};