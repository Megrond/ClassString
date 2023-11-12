#pragma once
#include<iostream>
using namespace std;

class String
{
	char* str;
	int length;
	char* createName(char const* name);
public:

	//String(char* str) {
	//	length = strlen(str);// функция strlen получает количество символов в строке которую мы передаём в объект

	//	// выделяем память для динамического массива где будет храниться наша строка
	//	// +1 символ так как нужно место в массиве под терминирующий 0
	//	this->str = new char[length + 1];
	//	// копируем символы строки в массив нашего класса
	//	for (int i = 0; i < length; i++)
	//	{
	//		this->str[i] = str[i];
	//	}
	//	//закрываем строку терминирующим нулём
	//	this->str[length] = '\0';
	//}

	//String(const String& copy)
	//{
	//	if (this->str != nullptr) {
	//		delete[] str;
	//	}

	//	length = strlen(copy.str);
	//	this->str = new char[length + 1];

	//	for (int i = 0; i < length; i++)
	//	{
	//		this->str[i] = copy.str[i];
	//	}
	//	this->str[length] = '\0';

	//}


	~String()
	{
		cout << "Деструктор строкового класса" << endl;
		delete[] this->str;
	}


	//String(int leght);
	String(const char*);
	////String(const char);		//?конструктор, принимающий в качестве параметра один символ.
	String(const String& copy);	//конструктор копирования

	//~String()
	//{
	//	cout<< "Деструктор строкового класса" << endl;
	//	delete[] str;
	//}

	String& setString(const char* string)
	{
		cout << "setString" << endl;
		delete[] this->str;
		this->str = createName(string);
		return *this;
	}

	//char getString()
	//{
	//	return *str;
	//}

	void show()
	{
		cout << "str: " << str << "\n*str " << *str
			<< "\n&str " << &str << "\nlength " << length << endl;
	}
};
