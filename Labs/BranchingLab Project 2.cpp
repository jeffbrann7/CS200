#include <iostream>
#include <string> 
using namespace std;

int main()
{
	float studentPoints;
	float totalPoints;
	

	cout << "Enter your score. ";
	cin >> studentPoints;
	cout << endl;

	cout << "Enter the total points. ";
	cin >> totalPoints;
	cout << endl;
	
	float percent = (studentPoints / totalPoints) * 100;
	cout << percent;
	cout << endl;
	cout << endl;

	if (percent >= 70)
	{
		cout << "Pass";
	}
	else
	{
		cout << "Fail";
	}


	
	
	while (true) {}
	return 0;
}