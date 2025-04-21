// Подключение заголовочного файла класса Man
#include "Man.h"
// Подключение стандартной библиотеки ввода/вывода
#include <iostream>
// Подключение библиотеки для работы со строками
#include <string>
// Подключение библиотеки для работы с функциями преобразования
#include <cstdlib>
// Подключение библиотеки для работы со строками в стиле C
#include <cstring>
// Подключение библиотеки для форматированного вывода
#include <iomanip>
// Подключение библиотеки для работы со строковыми потоками
#include <sstream>
// Отключение предупреждений безопасности для функций CRT
#define _CRT_SECURE_NO_WARNINGS
// Конструктор класса Man
Man::Man(int lName)
{
	// Выделение памяти для хранения имени
	pName = new char[lName + 1]();
}
// Деструктор класса Man
Man::~Man()
{
	// Освобождение памяти, выделенной для имени
	delete[] pName;
}
// Установка имени из буфера
void Man::SetName(const char* fromBuf)
{
	// Создание строкового потока для разбора буфера
	std::istringstream iss(fromBuf);
	// Чтение имени из потока (до пробела)
	iss.getline(pName, l_name, ' ');
}
// Установка года рождения из буфера
void Man::SetBirthYear(const char* fromBuf)
{
	// Создание строкового потока для разбора буфера
	std::istringstream iss(fromBuf);
	// Временная переменная для пропуска ненужных данных
	std::string temp;
	// Пропуск имени
	iss >> temp;
	// Пропуск фамилии
	iss >> temp;
	// Чтение года рождения
	iss >> birth_year;
}
// Установка зарплаты из буфера
void Man::SetPay(const char* fromBuf)
{
	// Создание строкового потока для разбора буфера
	std::istringstream iss(fromBuf);
	// Временная переменная для пропуска ненужных данных
	std::string temp;
	// Пропуск имени, фамилии и года рождения
	iss >> temp >> temp >> temp;
	// Чтение зарплаты
	iss >> pay;
}
// Сравнение имени с переданной строкой
bool Man::CompareName(const char* name) const
{
	// Создание строкового потока для разбора имени
	std::istringstream iss(pName);
	// Переменная для хранения фамилии
	std::string lastName;
	// Чтение фамилии из потока
	iss >> lastName;
	// Сравнение фамилии с переданной строкой
	return lastName == name;
}
// Вывод информации о сотруднике
void Man::Print() const
{
	// Вывод имени, года рождения и зарплаты с форматированием
	std::cout << pName << " " << birth_year << " "
		<< std::fixed << std::setprecision(2) << pay << std::endl;
}