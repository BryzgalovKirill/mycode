#include <iostream>

using namespace std;

int main() 
{
	setlocale(0, "rus");

	for (int x = 1; x < 10; x++) 
	{
		for (int y = 1; y < 10; y++) 
		{
			cout << x * y << "\t";
		}

	 cout << endl;
	}


	return 0;
}