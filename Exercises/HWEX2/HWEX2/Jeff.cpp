#include <iostream>
using namespace std;
// The scope of the age variable is Global.
// The scope of ticketPrice is Global.

int main()
{
	int age;
	float ticketPrice;

	cout << "Age? ";
	cin >> age; 

	if (age < 13)
	{
		ticketPrice = 5.00;
	}
	else
	{
		ticketPrice = 7.00;
	}

	cout << "Ticket Price: " << ticketPrice << endl;
	
	while ( true ) {} // temporary to not allow program to quit
	return 0;
}

