#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int hour, package;
	
	cout << "Hi! This is your Internet service provider!" << endl;
	cout << "\n";
	
	
	cout << "Please choose and enter the type of your service package:" << endl;
	cout << "[1] Package A (P995/mo, 10 hrs of access, + P20/additional hour)" << endl;
	cout << "[2] Package B (P1495/mo, 20 hrs of access, + P10/additional hour)" << endl;
	cout << "[3] Package C (P1995/mo, unlimited hrs of access)" << endl;
	cout << "\n";
	cout << "Please enter the number of hours used in a month. \n";
	cout << "Number of hours: ";
	cin >> hour;
	cout << "\n";
	cout << "Subscription Package (1, 2 or 3): ";
	cin >> package;
	cout << "\n";
	
	if (package == 1 && hour <= 10) 
	cout << "Total amount due: P995";
	
	else if (package == 1 && hour > 10) 
	cout << "Total amount due: P" << 995 + (20 * (hour-10));
	
	else if (package == 2 && hour <= 20) 
	cout << "Total amount due: P1495";
	
	else if (package == 2 && hour > 20) 
	cout << "Total amount due: P" << 1495 + (10 * (hour-20));
	
	else if (package == 3) 
	cout << "Total amount due: P1995";
	
	else 
	cout << "Invalid!";
	
	_getch();
	return 0;
}
