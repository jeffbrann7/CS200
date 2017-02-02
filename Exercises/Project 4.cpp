#include <iostream>
#include <string>
using namespace std;

int main()
{
	int feet;

	cout << "Enter the amount of feet: ";
	cin >> feet;

	for (int n = 0; n <= feet * 12; n++)
	{
		if (n % 12 == 0)
		{
			cout << "|";
		}
		else
		{
			cout << "-";
		}
	}
	
	
	while (true) {}
	return 0;
}