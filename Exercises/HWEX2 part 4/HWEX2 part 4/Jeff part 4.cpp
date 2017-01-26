#include <iostream>
#include <string>
using namespace std;

// This isn't correct. "A" should come before "a" since it does in the alphabet.

int main()
{
	char letter1;
	char letter2;


	cout << "Letter 1? ";
	cin >> letter1; 
	cout << endl;


	cout << "Letter 2? ";
	cin >> letter2;
	cout << endl;

	if (letter1 < letter2)
	{
		cout << "First letter comes first";
	}
	else
	{
		cout << "Second letter comes first";
	}

	
	while (true){}
	return 0;
}