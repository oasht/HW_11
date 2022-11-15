#include "Header.h"

List::List()
{
	Head = Tail = NULL;
	Count = 0;
}



void List::Add(char _data)
{
	Element* temp = new Element;
	temp->data = _data;
	temp->Next = NULL;
	if (Head != NULL)
	{
		Tail->Next = temp;
		Tail = temp;
	}
	else
	{
		Head = Tail = temp;
	}
	Count++;
}

void List::Add_pos(int pos, char data)
{
	if (pos == 0)
	{
		cout << "Input position" << endl;
		cin >> pos;
	}
	if (pos<1 || pos>Count + 1)
		cout << "Error" << endl;
	Element * previous = this->Head;
	for (int i = 0; i < pos - 1; i++)
	{
		previous = previous->Next;
	}
	Element* new_element = new Element(data, previous->Next);
	previous->Next = new_element;
	Count++;
}



void List::Del_pos(int pos)
{
	if (pos == 0)
	{
		cout << "Input position " << endl;
		cin >> pos;
	}
	if (pos<0 || pos>Count)
	{
		cout << "Error" << endl;
	}
	else
	{
		Element* previous = this->Head;

		for (int i = 0; i < pos - 1; i++)
		{
			previous = previous->Next;

		}
		Element* del = previous->Next;
		previous->Next = del->Next;
		delete del;
		Count--;
	}
}




void List::Print()
{
	Element* temp = Head;
	while (temp != NULL)
	{
		cout << temp->data << "  ";
		temp = temp->Next;
	}
	cout << endl << endl;
}


void List::Print_pos(int pos)
{
	Element* temp;
	if (pos<1 || pos>Count)
		cout << "Error" << endl;

	temp = Head;
	int i = 1;
	while (i < pos)
	{
		temp = temp->Next;
		i++;
	}
	cout << "Index " << pos << " = " << temp->data << endl;
}
