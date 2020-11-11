#include <iostream>
#include <vector>

using namespace std;
int main()
{
	for (int number = 312614; number <= 312651; ++number)
	{
		int i = 0;
		int dividers[6] = { 0, 0, 0, 0, 0, 0 };
		for (int divider = 1; divider <= number && i < 6; ++divider)
		{
			if (number % divider == 0)
			{
				dividers[i] = divider;
				++i;
			}
		}

		if (dividers[5] == number)
		{
			cout << number << endl;
			for (int i = 0; i < 6; ++i)
			{
				cout << dividers[i] << " ";
			}
			cout << endl;
		}
	}
	
}