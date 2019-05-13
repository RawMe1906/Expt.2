#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int x,y;
	double V;
	const double z = 2.5;
	
	cout << "This program accepts 2 integer numbers, x and y, to compute for V \n";
	cout << "where: V = xyz                 if x = 1 and 1 < y < 5; \n";
	cout << "       V = x + y/z             if x = 1 and y >= 5; \n";
	cout << "       V = |(x - y)/z|         if x = 2 and y <= 5; \n";
	cout << "       V = x - sqrt(y + z)     if x = 2 and y > 5; \n";
	cout << "       V = x + y + z           for other values of x and y \n";
	cout << "\n";
	cout << "   and z = 2.5 \n";
	cout << "\n" << endl;
	
	cout << "Enter first integer number, x = ";
	cin >> x ;
	
	cout << "Enter second integer number, y = ";
	cin >> y ;
	
	if (x == 1 || x ==2){
		switch(x)
		{
			case 1: {
				if ( y > 1 && y < 5){
					V = y * z;
					cout << "V =";
					cout << fixed << setprecision(2) << setw(10) << V ;
				}
				else if (y >= 5){
					V = x + (y/z);
					cout << "V =";
					cout << fixed << setprecision(2) << setw(10) << V;
				}
				else
				cout << "Invalid!";
			break;
		}

		case 2:{
		if (x == 2 && y <= 5){
			V = abs((x - y)/z);
			cout << "V =";
			cout << fixed << setprecision(2) << setw(10) << V ;
		}
		else if (x == 2 && y > 5) {
			V = x - sqrt(y + z);
			cout << "V =";
			cout << fixed << setprecision(2) << setw(10) << V ;
		}
		else
		cout << "Invalid!";
		break;
		}
	}
	}
	else 
	{ V = x + y+ z;
	cout << "V =";
	cout << fixed << setprecision(2) << setw(10) << V ;
	}
	
	_getch();
	return 0;
}
