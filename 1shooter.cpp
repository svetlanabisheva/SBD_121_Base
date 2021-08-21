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
		case 'W': case 'w': cout << "Вперед" << endl; break;
		case 'S': case 's': cout << "Назад" << endl; break;
		case 'A': case 'a': cout << "Влево" << endl; break;
		case 'D': case 'd': cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		
		}
	} while (key);
}