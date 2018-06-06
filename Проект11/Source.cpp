#include "vector.h"
#include "enhansedVector.h"
#include "newList.h"
#include "newList.cpp"
#include "enhansedList.h"




int main() {
	setlocale(LC_ALL, "russian");

	short a;
	do {
		cout << "1 - enhanced vector" << endl
			<< "2 - enhanced list\n:"; cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
		{
			Enhanced::EnhancedVector <double> v;
			v.push_back(8);
			v.push_back(42);
			v.push_back(7);
			try
			{
				for (int i = 0; i < v.size(); i++)
					cout << v[i] << endl;
			}
			catch (char *txt) {
				cout << txt << endl;
			}
		}break;
		case 2:
		{
			EnhancedList <int> l;
			l.pushBack(6);
			l.pushBack(4);
			l.pushBack(7);
			l.print();

			cout << "использование оператора []:" << l[2] << endl;
		}break;
		}

		cout << "хотите продолжить?1/0";
		cin >> a;
	} while (a != 0);

	system("pause");
	return 0;
}