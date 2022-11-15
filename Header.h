#include <iostream>
#include <iomanip>
#include <string.h>
#include <Windows.h>
#include <time.h>
using namespace std;

struct Element
{
	char data;
	Element* Next;
	Element()
	{
		data = 0;
		Next = nullptr;
	}
	Element(int data, Element* Next)
	{
		this->data = data;
		this->Next = Next;
	}
};
class List
{
	Element* Head, * Tail;
	int Count;
	int data;
	Element* Next;

public:
	List();
	void Add(char _data);
	void Add_pos(int pos, char data);
	void Del_pos(int pos);
	void Print();
	void Print_pos(int pos);

};
