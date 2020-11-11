#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int const number);

int main()
{
	int position = 0;
	 
	for (int number = 245690; number < 245757; ++number)
	{
		++position;
		if (isPrime(number))
		{
			cout << position << " " << number << endl;
		}
	}

	return 0;
}

bool isPrime(int const number)
{
	if (number == 1)
	{
		return false;
	}

	if (number == 2)
	{
		return true;
	}

	for (int divider = 2; divider <= number / 2 + 1; ++divider)
	{
		if (number % divider == 0)
		{
			return false;
		}
	}

	return true;
}