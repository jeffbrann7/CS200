#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	cout << "What is the Price of your item? $";
	float price; 
	cin >> price; 
	
	cout << "What city are you in? ";
	string city;
	cin >> city; 

	float tax; 
	float total;
	

	if (city == "Olathe")
	{
		tax = .065;
	}
	else if (city == "Overland Park")
	{
		tax = .0935;
	}
	else if (city == "Raytown")
	{
		tax = .08225;
	}
	else if (city == "Independence")
	{
		tax = .07725;
	}
	else
	{
		tax = .08;
	}
	
	total = price + (price * tax);

	cout << "Total price is: $" << total << endl;
	
	while (true) {}
	return 0;

}