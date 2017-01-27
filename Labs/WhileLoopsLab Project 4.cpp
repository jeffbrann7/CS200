#include <iostream>
#include <string> 
using namespace std;

int main()
{
	int secretNumber = 7;
	int playerGuess;

	do
	{
		cout << "Enter a number: ";
		cin >> playerGuess;
		if (playerGuess < secretNumber)
		{
			cout << "Too Low!" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << "Too High!" << endl;
		}
		

	} while (playerGuess != secretNumber);

	cout << "You win!";
		
	
	while (true) {}
	return 0;
}