#include <iostream>
#include <string>
using namespace std;

int main()
{
	int choice;

	cout << "What is your favorite fruit? " << endl;
	cout << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Pear" << endl;
	cout << "4. Strawberry" << endl;
	cout << endl << "Your selection: ";

	cin >> choice;

	if (choice < 1 || choice > 4)
	{
		cout << "Invalid Choice!";
	}
	else
	{
		cout << "Good Choice!";
	}

	
	
	while (true) {}
	return 0;
}