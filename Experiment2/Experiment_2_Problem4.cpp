#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x,y;
	
	cout << "Counting from 1-10 by 1's', then 10-30 by 2's... \n";
	x=1;
	for (;x<=10;)
	{
	cout << x << ",";
	x++;
	}
	y=10;
	for (y>10;y<=30;y+=2)
	{
		if (y==10 || y == 30)
		continue;
		else
		cout << y << ",";
	}
	cout << "30";
	_getch();
	return 0;
}
