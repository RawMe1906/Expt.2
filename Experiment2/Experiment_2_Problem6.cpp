#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, sum;
	
	cout << "This program adds numbers counting from 1 up to the input number." << endl;
	cout << "Example: \n";
	cout << "         Input number = 5 \n";
	cout << "         The sum of integers from 1 to 5 is equal to 15. \n";
	cout << "\n";
	cout << "* An input number of 0 would initiate a program exit. \n";
	cout << "\n";
	
	cout << "Enter a positive integer number: ";
	cin >> x;
	sum = 0;
	
	if (x > 0){
		for (y=1; y<=x; ++y)
			{
			sum += y;
			}cout << "The sum of the integers from 1 to " << x << " is equal to " << sum << endl;
		do {
			cout << "Enter a positive integer number: ";
			cin >> x;
			sum = 0;	
			if (x > 0){
				for (y=1; y<=x; ++y)
				{
					sum += y;
					}
				cout << "The sum of the integers from 1 to " << x << " is equal to " << sum << endl;
			}
			else if (x == 0)
				cout << "Thank you! The program will now exit.";
			else 
				cout << "Invalid number!";
		} while (x>0);
	}
	else if (x == 0){
	cout << "Thank you! The program will now exit.";
	}
	else 
	cout << "Invalid number!";
	
		
		
	_getch();
	return 0;
}
