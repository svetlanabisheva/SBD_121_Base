#include <iostream>
#include <conio.h>
using namespace std;
#pragma warning (disable: 4326)

void main()

{
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		
		switch (key)

		{
		case 'W': case 'w': cout << "������" << endl; break;
		case 'S': case 's': cout << "�����" << endl; break;
		case 'A': case 'a': cout << "�����" << endl; break;
		case 'D': case 'd': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		
		}
	} while (key);
}