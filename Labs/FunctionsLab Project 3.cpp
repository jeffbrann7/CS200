#include <iostream>
#include <string>
using namespace std;

float countChange(int quarterCount, int dimeCount, int nickelCount, int pennyCount)
{
	float change = quarterCount * 0.25 + dimeCount * 0.10 + nickelCount * 0.05 + pennyCount * 0.01;
	return change; 
}

int main()
{
	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = countChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}
	
	return 0;
}