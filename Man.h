// Защита от повторного включения заголовочного файла
#pragma once
// Длина поля имени
const int l_name = 30;
// Длина поля года рождения
const int l_year = 5;
// Длина поля оклада
const int l_pay = 10;
// Общая длина буфера
const int l_buf = l_name + l_year + l_pay;
// Подключение библиотеки для работы с файлами
#include <fstream>
// Подключение библиотеки ввода-вывода
#include <iostream>
// Объявление класса Man
class Man
{
private:
    // Указатель на имя
    char* pName;
    // Год рождения
    int birth_year;
    // Оклад
    float pay;
public:
    // Конструктор с параметром по умолчанию
    Man(int lName = 30);
    // Деструктор
    ~Man();
    // Метод для сравнения имени
    bool CompareName(const char*) const;
    // Геттер для года рождения
    int GetBirthYear() const { return birth_year; }
    // Геттер для оклада
    float GetPay() const { return pay; }
    // Геттер для имени
    const char* GetName() { return pName; }
    // Метод для вывода информации
    void Print() const;
    // Сеттер для года рождения
    void SetBirthYear(const char*);
    // Сеттер для имени
    void SetName(const char*);
    // Сеттер для оклада
    void SetPay(const char*);
};