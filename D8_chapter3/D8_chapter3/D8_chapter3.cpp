#include "../../std_lib_facilities.h"

int main()
{
	int value;
	cout << "Enter a number: \n";
	cin >> value;
		if ( value % 2 == 0)
			cout << "You entered an even number \n";
		else
			cout << "You entered an odd number \n";
}