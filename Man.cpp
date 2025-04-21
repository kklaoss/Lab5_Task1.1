// Подключение заголовочного файла класса Man
#include "Man.h"
// Отключение предупреждений CRT
#define _CRT_SECURE_NO_WARNINGS
// Подключение библиотеки ввода-вывода
#include <iostream>
// Подключение библиотеки строк
#include <string>
// Подключение стандартной библиотеки
#include <stdlib.h>
// Подключение библиотеки для работы со строками
#include <cstring>
// Отключение предупреждения о небезопасных функциях
#pragma warning(disable : 4996)
// Конструктор класса Man
Man::Man(int lName)
{
    // Сообщение о вызове конструктора
    std::cout << "Constructor is working" << std::endl;
    // Выделение памяти для имени
    pName = new char[lName + 1];
}
// Деструктор класса Man
Man::~Man()
{
    // Сообщение о вызове деструктора
    std::cout << "Destructor is working" << std::endl;
    // Освобождение памяти, выделенной для имени
    delete[] pName;
}
// Установка имени из буфера
void Man::SetName(const char* fromBuf)
{
    // Копирование имени из буфера
    strncpy(pName, fromBuf, l_name);
    // Добавление нуль-терминатора
    pName[l_name] = 0;
}
// Установка года рождения из буфера
void Man::SetBirthYear(const char* fromBuf)
{
    // Преобразование строки в число
    birth_year = atoi(fromBuf + l_name);
}
// Установка оклада из буфера
void Man::SetPay(const char* fromBuf)
{
    // Преобразование строки в число с плавающей точкой
    pay = atof(fromBuf + l_name + l_year);
}
// Сравнение имени с заданной строкой
bool Man::CompareName(const char* name) const
{
    // Проверка наличия фамилии в имени
    if ((strstr(pName, name)) && (pName[strlen(name)] == ' '))
    {
        // Совпадение найдено
        return true;
    }
    else
    {
        // Совпадение не найдено
        return false;
    }
}
// Вывод информации о сотруднике
void Man::Print() const
{
    // Форматированный вывод
    std::cout << pName << birth_year << ' ' << pay << std::endl;
}