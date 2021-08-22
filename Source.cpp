#include<iostream>
#include<string.h>

using namespace std;

int Count(char* &str, char simb)
{
	int size = strlen(str);
	int counter = 0;
	for (int i = 0; i < size; i++)
	{

		if (str[i] == simb)
			counter++;

	}
	return counter;
}

int main()
{

	setlocale(0, "");

	char* str = new char[256];
	char simb;

	cout << "\t Функция подсчета количества символов\n\n";
	cout << "Введите строку из символов: ";
	cin >> str;
	cout << endl;
	cout << "Введите символ: ";
	cin >> simb;

	cout << endl;
	cout <<"Количество символов = " <<Count(str, simb)<<endl;
	cout << endl;



}
/*Задание 5:
Пользователь вводит строку символов и 
искомый символ, посчитать сколько раз он встречается в строке.*/