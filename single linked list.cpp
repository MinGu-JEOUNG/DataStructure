#include<iostream>
using namespace std;

//���� : 1. �������� �̾ ������ ���ΰ�? ( ����Ʈ ���� ��尡 �ִ°�? ���°�? ) , 2. �߰��� �������� ���ΰ�?
//���� : n���� ��� ���� ( �����Ǵ� ����� next�ּҸ� �����صд� -> ��带 �����Ѵ� -> ���� ����� next�ּҸ� �����ص� �ּҷ� �����Ѵ� ) 
//Ž�� : n��° ��� ��� ( ����� ���� �⺻, ���� ����ּ�..? )
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