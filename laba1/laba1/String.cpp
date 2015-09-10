
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "String.h"

String::String(const char * str)
{
//	std::cout << "String::String(const char * str)" << std::endl;
	len = strlen(str);
	s = new char[len + 1];
	strcpy(s, str);
}

String::String(const String & str)
{
//	std::cout << "String::String(const char & String" << std::endl;
	len = str.len;
	s = new char[len + 1];
	strcpy(s, str.s);
}

String::~String()
{
//	std::cout << "~String()" << std::endl;
	delete[] s;
}

void String::SetString(const char * str)
{
	/*
	delete[] s;
	len = strlen(str);
	s = new char[len + 1];
	strcpy(s, str);
	*/

	*this = String(str);
}

void String::Print(std::ostream & os) const
{
	os << s;
}

const char * String::GetString() const
{
	return s;
}

bool String::IsSymbol(char symbol) const
{
	return strchr(s, symbol) ? true : false;
}

void String::ChangeSymbol(int pos, char symbol)
{
	if (0 <= pos && pos < len)
		s[pos] = symbol;
	else
		std::cerr << "Index out of range!" << std::endl;
}

const String & String::operator=(const String & str)
{
	if (this == &str)
		return *this;
	delete[] s;

	
	len = str.len;
	s = new char[len + 1];
	strcpy(s, str.s);
	
	return *this;
}

bool String::IsStr(const char * str) const
{
	return strstr(s, str) ? true : false;
}

std::ostream & operator<<(std::ostream & os, const String & str)
{
	str.Print(os);
	return os;
}