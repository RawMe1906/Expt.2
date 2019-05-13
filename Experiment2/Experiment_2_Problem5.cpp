#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,x,y,z;
	
	cout << "First 22 numbers of the Fibonacci Sequence:" << endl;
	
	x=0;
	y=1;
	for (a=0;a<=21;a++)
	{	if (a <= 1)
		z = a;
		else if (a==21)
		continue;
		else {
		z = x + y;
		x = y;
		y = z;
		}
		cout << z << ",";
	}
	cout << "10946";
	_getch();
	return 0;
}
