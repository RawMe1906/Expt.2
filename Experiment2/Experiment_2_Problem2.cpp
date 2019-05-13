#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double recentUse, unpaidBal;
	
	cout << "This program computes your water bill for the recent and previous month.";
	cout << "\n";
	cout << "Water bill/mo = P35 (water demand charge) \n";
	cout << "               + P1.10 per gallons of water used (consumption charge) \n";
	cout << "             * + P20 (late payment charge)";
	cout << "\n";
	cout << "Please enter amount of water use, in gallons, for the... \n";
	cout << "Recent month:  ";
	cin >> recentUse;
	cout << "\n";
	const double recentBal = 35 + (1.10 * recentUse);
	
	cout << fixed << setprecision(2) << "Balance for the recent month = P" << recentBal;
	
	cout << "\n";
	cout << "\n";
	
	cout << "Enter Unpaid balance from the previous month: P";
	cin >> unpaidBal;
	cout << "\n";
	
	if (unpaidBal > 0)
		cout << "Total Balance = P" << recentBal + unpaidBal + 20;
	else if (unpaidBal == 0){
		cout << "Total Balance = P" << recentBal;
	}
	else
		cout << "Invalid!"; 
	
	_getch();
	return 0;
}
