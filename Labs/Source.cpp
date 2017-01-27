#include <iostream>
#include <string> 
using namespace std;

int main()
{
	float a;
	float b;
	int choice;

	cout << "Enter a value for a: ";
	cin >> a;
	cout << endl;

	cout << "Enter a value for b: ";
	cin >> b;
	cout << endl;
	cout << endl;
	
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "Select an operation to use: ";
	cin >> choice;
	cout << endl;
	
	switch (choice)
	{
		case 1:
			cout << a + b << endl;
			break;

		case 2: 
			cout << a - b << endl;
			break;

		case 3:
			cout << a * b << endl;
			break;

		case 4:
			cout << a / b << endl;
			break;

		default: 
			cout << "Invalid Choice" << endl;
	}
	


	
	while (true) {};
	return 0;
}