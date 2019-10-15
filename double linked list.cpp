#include <iostream>

using namespace std;

class Node {
public:
	Node() : data(0), next(nullptr), prev(nullptr) {}

	Node(int value) : data(value) {}

	void SetData(int value) {
		data = value;
	}

	int GetData() { return data; }
	Node* GetPrev() { return prev; }
	Node* GetNext() { return next; }


	void linkFront(Node* nNode) {
		this->prev = nNode;
		if (nNode == nullptr)
			return;
		nNode->next = this;
	}

	void linkBack(Node* nNode) {
		this->next = nNode;
		if (nNode == nullptr)
			return;
		nNode->prev = this;
	}

	void removeFront(Node*& nNode) {
		this->prev = nNode->prev;
		delete nNode;
	}

	void removeBack(Node*& nNode) {
		this->next = nNode->next;
		delete nNode;
	}

private:
	Node* prev;
	Node* next;
	int data;
};

class DLinkedList {
private:
	Node* head = new Node();
	Node* tail = new Node();
	int size;

public:

	DLinkedList() : size(0) {
		head->linkBack(tail);
		head->linkFront(nullptr);
		tail->linkFront(head);
		tail->linkBack(nullptr);
	}

	~DLinkedList() {
		clear();
	}

	void pushFront(int value)
	{
		Node* nNode = new Node();
		nNode->SetData(value);
		nNode->linkFront(nullptr);
		nNode->linkBack(head);
		head->linkFront(nNode);
		head = nNode;
		size += 1;
	}
	void pushBack(int value)
	{
		Node* nNode = new Node();
		nNode->SetData(value);
		nNode->linkBack(nullptr);
		nNode->linkFront(tail);
		tail->linkBack(nNode);
		tail = nNode;
		size += 1;
	}

	void insertFront(unsigned int position, int value) {
		if (position == 0)
		{
			pushFront(value);
			return;
		}

		for (int i = 0; i < position; i++) {
			Node* temp = head;
			temp = temp->GetNext();
		}
		Node* nNode = new Node();
		nNode->SetData(value);
		head->linkFront(nNode);
		nNode->linkBack(head);
		nNode->linkFront(head->GetPrev());
		size += 1;
	}


	void insertBack(unsigned int position, int value) {
		if (position == size - 1)
		{
			pushBack(value);
			return;
		}

		for (int i = 0; i < position; i++) {
			Node* temp = head;
			temp = temp->GetNext();
		}
		Node* nNode = new Node();
		nNode->SetData(value);
		head->linkBack(nNode);
		nNode->linkFront(head);
		nNode->linkBack(head->GetNext());
		size += 1;
	}

	void remove() {

	}

	void search(int x) {
		Node* temp = head;
		for (int i = 0; i < size; i++)
		{
			if (x == temp->GetData())
				cout << i << "번 째에 " << x << "가 존재합니다." << endl;
			temp = temp->GetNext();
		}
	}

	void clear() {
		// delete
	}

	void PrintAll()
	{
		Node* temp = head;
		for (int i = 0; i < size; i++)
		{
			printf("%d\n", temp->GetData());
			temp = temp->GetNext();
		}
	}

};

int main()
{
	DLinkedList list;
	list.pushFront(1);
	list.pushFront(2);
	list.pushFront(3);
	list.pushFront(4);
	list.pushFront(5);
	list.pushFront(6);
	list.pushBack(0);

	list.search(6);
	list.PrintAll();
	return 0;
}