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

	cout << "\t ������� �������� ���������� ��������\n\n";
	cout << "������� ������ �� ��������: ";
	cin >> str;
	cout << endl;
	cout << "������� ������: ";
	cin >> simb;

	cout << endl;
	cout <<"���������� �������� = " <<Count(str, simb)<<endl;
	cout << endl;



}
/*������� 5:
������������ ������ ������ �������� � 
������� ������, ��������� ������� ��� �� ����������� � ������.*/