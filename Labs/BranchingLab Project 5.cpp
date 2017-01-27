#include <iostream>
#include <string> 
using namespace std;

int main()
{
	float x1 = 5.00;
	float x2;

	cout << "x1 = " << x1 << endl;
	cout << endl;
	cout << "Where is x2? ";
	cin >> x2;
	cout << endl;

	if (x1 - 5 <= x2 && x2 <= x1 + 5)
	{
		cout << "Within 5 units from x1!";
	}
	else
	{
		cout << "Too far away...";
	}

	
	
	while (true) {}
	return 0;
}