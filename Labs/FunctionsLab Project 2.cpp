#include <iostream>
#include <string>
using namespace std;

// Declare function here
float AddTax(float dollar)
{
	float price = dollar + dollar * 0.12;
	return price;
}

int main()
{
	cout << "Price: $" << 9.99 << " \t with tax: $" << AddTax(9.99) << endl;
	cout << "Price: $" << 19.95 << " \t with tax: $" << AddTax(19.95) << endl;
	cout << "Price: $" << 10.00 << " \t with tax: $" << AddTax(10.00) << endl;
	
	return 0;
}