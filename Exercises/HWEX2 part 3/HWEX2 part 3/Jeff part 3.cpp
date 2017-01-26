#include <iostream>
#include <string>
#include <ostream>
using namespace std; 

//Yes you can also write it as as the value of a boolean variable. 

int main()
{
	bool isTallEnoughToRide;
	int feet; 

	cout << "Height in feet? ";
	cin >> feet; 

	isTallEnoughToRide = (feet > 3);
		if (isTallEnoughToRide)
		{
			cout << "Permitted to ride the roller coaster";
		}
		else
		{
			cout << "Too short to ride the roller coaster";
		}
	
	while ( true ) {}
	return 0;
}