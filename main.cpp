#include "List.h"

//Задача 2: Создать два списка из случайных целых чисел.
//В первом найти максимальный элемент и за ним вставить элементы второго

int main()
{
	SetConsoleOutputCP(1251);

	pNode list = new Node;
	pNode2 list2 = new Node2;

	int c, k;
	cout << "Введите количество элементов 1-го списка: ";
	cin >> c;
	cout << "\n\nВведите количество элементов 2-го списка: ";
	cin >> k;

	system("cls");

	

	if (Empty1(list) && Empty2(list2))
	{
		cout << "Исходные списки:\n\n";

		Random_List1(list, c);
		Random_List2(list2, k);

		Print_Lists(list, list2);

		Add_After_Max(Search_Max(list), list, list2);
		cout << "\n\nНовый список: ";

		print1(list);
		cout << "\n\n";
		Delete_List2(list2);
		system("pause");
		return 0;
	}
	else if (Empty1(list) == false && Empty2(list2) == false)
	{
		cout << "Оба списка пустые!!";
		return 0;
	}
	else if (Empty1(list) == false)
	{
		cout << "1-й список пуст!!";
		return 0;
	}
	else
	{
		cout << "2-й список пуст!!";
		return 0;
	}
}