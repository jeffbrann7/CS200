#include <iostream>
#include <string>
using namespace std;

int main()
{
	int choice;
	
	while (true)
	{
		cout << "Enter a number between 1 and 5: ";
		cin >> choice;

		switch (choice)
		{
		case 1: cout << "The roman numeral is: I" << endl << endl;
			break;

		case 2: cout << "The roman numeral is: II" << endl << endl;
			break;
		
		case 3: cout << "The roman numeral is: III" << endl << endl;
			break;
			
		case 4: cout << "The roman numeral is: IV" << endl << endl;
			break;
			
		case 5: cout << "The roman numer is: V" << endl << endl;
			break;
		}
	}

	

}
