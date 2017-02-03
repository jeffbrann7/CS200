#include <iostream>
#include <string>
using namespace std;

int main()
{
	float startingWage;
	float percentRaisePerYear;
	int yearsWorked;

	cout << "What is your starting wage? " << ">> ";
	cin >> startingWage; 
	cout << endl;
	
	cout << "What % of a raise do you get per year? " << ">> %";
	cin >> percentRaisePerYear;
	cout << endl;
	percentRaisePerYear /= 100;
	
	cout << "How many years have you worked? " << ">> ";
	cin >> yearsWorked;
	cout << endl;

	float adjustedWage = startingWage;

	for (int i = 0; i < yearsWorked; i++)
	{
		adjustedWage += adjustedWage * percentRaisePerYear;
	}

	cout << "Your New wage is: $" << adjustedWage;
	

	
	while (true) {}
	return 0;
}