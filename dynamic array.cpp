#include <iostream>
#include <stdlib.h>

class Array {

public:
	Array();
	~Array();

	//memery reserve
	void reserve(const int& len);
	void reserve(const int& len, const int& data);

	//data insert
	void push_back(const int& data);
	void insertData(const int& index, const int& data);
	void insertDataAll(const int& data);

	//data access
	const int& at(int index);

	//data delete
	void pop_back();

private:
	int* ptr;
	int len;
};

Array::Array() : ptr(nullptr), len(0) { }

Array::~Array()
{
	delete[] ptr;
	ptr = nullptr;
}

//memory reserve
void Array::reserve(const int& len)
{
	int* temp_ptr = ptr + len;

	temp_ptr = new int[len];
}
void Array::reserve(const int& len, const int& data)
{
	int* temp_ptr = ptr + len;

	memset(temp_ptr, data, sizeof(int) * len);
}

//data insert
void Array::push_back(const int& data)
{
	int* temp_ptr = ptr + len;

	temp_ptr = new int;
	temp_ptr[len] = data;

	len++;
}
void Array::insertData(const int& index, const int& data)
{
	if (index < 0)
	{
		std::cout << "���� �ε����� �����ϴ�." << std::endl;
		return;
	}

	if ((index >= 0) && (index < len))
	{
		ptr[index] = data;
	}
	else
	{
		std::cout << "�ε���" << index << "������ Ȯ������ �ʾҽ��ϴ�." << std::endl;
	}
}
void Array::insertDataAll(const int& data)
{
	if (len == 0)
	{
		std::cout << "�迭 ������ Ȯ������ �ʾҽ��ϴ�." << std::endl;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			ptr[i] = data;
		}
	}
}

//data access
const int& Array::at(int index)
{
	if (index >= len)
	{
		std::cout << "�ش� �ε����� ������ Ȯ������ �ʾҽ��ϴ�." << std::endl;
	}
	else
	{
		return ptr[index];
	}
}

//data delete
void Array::pop_back()
{
	if (len == 0)
	{
		std::cout << "�迭 ������ Ȯ������ �ʾ����Ƿ� �����͸� ������ �� �����ϴ�.\n" << std::endl;
	}
	else
	{
		int* temp_ptr = ptr + len - 1;

		delete temp_ptr;
		temp_ptr = nullptr;

		len--;
	}
}