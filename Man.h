// Защита от многократного включения заголовочного файла
#pragma once
// Длина поля для имени
const int l_name = 30;
// Длина поля для года рождения
const int l_year = 5;
// Длина поля для зарплаты
const int l_pay = 10;
// Общая длина буфера для чтения строки
const int l_buf = l_name + l_year + l_pay;
// Подключение библиотеки для работы с файлами
#include <fstream>
// Подключение стандартной библиотеки ввода/вывода
#include <iostream>
// Подключение библиотеки для форматированного вывода
#include <iomanip>
// Подключение библиотеки для работы со строками
#include <string>
// Класс Man для хранения и обработки данных о сотруднике
class Man
{
private:
	// Указатель на имя сотрудника
	char* pName;
	// Год рождения сотрудника
	int birth_year;
	// Зарплата сотрудника
	float pay;
public:
	// Конструктор с параметром длины имени
	Man(int lName = 30);
	// Деструктор
	~Man();
	// Метод для сравнения имени
	bool CompareName(const char*) const;
	// Геттер для года рождения
	int GetBirthYear() const { return birth_year; }
	// Геттер для зарплаты
	float GetPay() const { return pay; }
	// Геттер для имени
	const char* GetName() const { return pName; }
	// Метод для вывода информации о сотруднике
	void Print() const;
	// Сеттер для года рождения
	void SetBirthYear(const char*);
	// Сеттер для имени
	void SetName(const char*);
	// Сеттер для зарплаты
	void SetPay(const char*);
};