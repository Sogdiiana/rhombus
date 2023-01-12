#include <iostream>
using namespace std;
int main()
{
	int i, space, j;
    for (i = 1; i <= 6; i++)
	{
		for (space = 1; space <= (6 - i); space++)
			cout << " ";
		for (j = 1; j <= i; j++)
			cout << "* ";
		cout << endl;
	}
	for (i = 1; i <= 6; i++)
	{ 
		for (j = 1; j <= i; j++)
			cout << " ";
		for (space = 1; space <= (6 - i); space++)
			cout << "* ";
		
		cout << endl;
	}
	cout << endl;



	return 0;
}