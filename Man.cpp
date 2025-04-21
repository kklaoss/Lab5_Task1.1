// ����������� ������������� ����� ������ Man
#include "Man.h"
// ����������� ����������� ���������� �����/������
#include <iostream>
// ����������� ���������� ��� ������ �� ��������
#include <string>
// ����������� ���������� ��� ������ � ��������� ��������������
#include <cstdlib>
// ����������� ���������� ��� ������ �� �������� � ����� C
#include <cstring>
// ����������� ���������� ��� ���������������� ������
#include <iomanip>
// ����������� ���������� ��� ������ �� ���������� ��������
#include <sstream>
// ���������� �������������� ������������ ��� ������� CRT
#define _CRT_SECURE_NO_WARNINGS
// ����������� ������ Man
Man::Man(int lName)
{
	// ��������� ������ ��� �������� �����
	pName = new char[lName + 1]();
}
// ���������� ������ Man
Man::~Man()
{
	// ������������ ������, ���������� ��� �����
	delete[] pName;
}
// ��������� ����� �� ������
void Man::SetName(const char* fromBuf)
{
	// �������� ���������� ������ ��� ������� ������
	std::istringstream iss(fromBuf);
	// ������ ����� �� ������ (�� �������)
	iss.getline(pName, l_name, ' ');
}
// ��������� ���� �������� �� ������
void Man::SetBirthYear(const char* fromBuf)
{
	// �������� ���������� ������ ��� ������� ������
	std::istringstream iss(fromBuf);
	// ��������� ���������� ��� �������� �������� ������
	std::string temp;
	// ������� �����
	iss >> temp;
	// ������� �������
	iss >> temp;
	// ������ ���� ��������
	iss >> birth_year;
}
// ��������� �������� �� ������
void Man::SetPay(const char* fromBuf)
{
	// �������� ���������� ������ ��� ������� ������
	std::istringstream iss(fromBuf);
	// ��������� ���������� ��� �������� �������� ������
	std::string temp;
	// ������� �����, ������� � ���� ��������
	iss >> temp >> temp >> temp;
	// ������ ��������
	iss >> pay;
}
// ��������� ����� � ���������� �������
bool Man::CompareName(const char* name) const
{
	// �������� ���������� ������ ��� ������� �����
	std::istringstream iss(pName);
	// ���������� ��� �������� �������
	std::string lastName;
	// ������ ������� �� ������
	iss >> lastName;
	// ��������� ������� � ���������� �������
	return lastName == name;
}
// ����� ���������� � ����������
void Man::Print() const
{
	// ����� �����, ���� �������� � �������� � ���������������
	std::cout << pName << " " << birth_year << " "
		<< std::fixed << std::setprecision(2) << pay << std::endl;
}