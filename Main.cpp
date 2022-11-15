#include "Header.h"

void main()
{
	srand(time(0));
	List l1;
	char s[] = "Hello, C++!!";
	cout << s << endl;
	int len = strlen(s);
	char a;
	int b;
	for (int i = 0; i < len; i++)
		l1.Add(s[i]);

	bool key_1;
	do
	{
		system("cls");
		cout << "Choose the action: 1 - pring array; 2 - add a letter to array; 3 - delete the letter; 4 - print removed element" << endl;
		short key;
		cout << endl;
		cin >> key;
		switch (key)
		{
		case 1:
		{
			system("cls");
			l1.Print();

		}
		break;
		case 2:
		{
			system("cls");
			cout << "Enter symbol" << endl;
			cin >> a;

			l1.Add_pos(3, a);
			l1.Print();
		}
		break;
		case 3:
		{
			system("cls");
			cout << "Enter the number of symbol you would like to delete" << endl;
			cin >> b;
			l1.Del_pos(b);
			l1.Print();
		}
		break;
		case 4:
		{
			system("cls");
			cout << "Enter the number of symbol you would like to print" << endl;
			cin >> b;
			l1.Print_pos(b);
		}
		break;
		}
		cout << "Would you like to continue? 1-yes, 0 - no" << endl << endl;
		cin >> key_1;
	} while (key_1);

}