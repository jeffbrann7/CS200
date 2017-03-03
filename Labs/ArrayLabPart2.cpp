#include <iostream>
#include <string> 
using namespace std;

int main()
{
	
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;

	for (itemCount = 0; itemCount < arraySize; itemCount++)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter items price: ";
		cin >> prices[itemCount];
		itemCount++;
	}

	for (int counter = 0; counter < arraySize; counter++)
	{
		cout << "Item # " << counter << endl;
		cout << "Item name: " << items[counter] << "Item price: " << prices[counter] << endl;
		counter++;
	}
	return 0;
}