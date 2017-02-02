#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sum = 0;
	bool isDone = false;

	while (isDone != true)
	{
		int number;
		char choice;

		cout << "Enter a number: " ;
		cin >> number;
		cout << endl;
		
		cout << "Type (Q) to quit, or (A) to enter another." << endl;
		cout << "Choice: ";
		cin >> choice; 
		cout << endl;
		
		if (choice == 'Q' || choice == 'q')
		{
			isDone = true;
		}

		sum = sum + number; 
	}
	 
	cout << "The sum is: " << sum << endl;

	while (true) {}
	return 0;
}
