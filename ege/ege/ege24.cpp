#include "ege24.h"
#include <string>
#include <iostream>
using namespace std;

int ege24::factorial(int const number)
{
	int f = 1;
	for (int i = 2; i <= number; ++i)
	{
		f *= i;
	}

	return f;
}

void ege24::task27421()
{
	string const text = "xyxyzzxyxyxyzxyx";
	
	int count = 1;
	int max = 0;

	for (int i = 1; i < text.length(); i++)
	{
		if (text[i - 1] != text[i])
		{
			++count;
		}
		else
		{
			count = 1;
		}

		if (count > max)
		{
			max = count;
		}
	}
	cout << max;
}