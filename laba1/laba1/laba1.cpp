
#include <iostream>
#include "String.h"

int main()
{
	const int N = 5;
	String arrS[N];

	arrS[0].SetString("This is the first object");
	arrS[1].SetString("This is the second object");
	arrS[2].SetString("This is the third object");
	arrS[3].SetString("This is the fourth object");
	arrS[4].SetString("This is the fiveth object");

	for (int i = 0; i < N; i++)
	{
		if (arrS[i].GetLength() == 25)
			std::cout << arrS[i] << std::endl;
	}

	for (int i = 0; i < N; i++)
	{
		if (arrS[i].IsStr("the f"))
			std::cout << arrS[i] << std::endl;
	}

	String s1;
	String s2 = "This is String";
	s1.SetString("This is myString");
	std::cout << s1 << std::endl;

	s2.ChangeSymbol(50, 'd');

	std::cout << s2 << std::endl;
}