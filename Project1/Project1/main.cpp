#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fin("24_demo.txt");

	while (!fin.eof())
	{
		char symbol = '\0';
		fin >> symbol;
		cout << symbol;
	}

	return 0;
}
