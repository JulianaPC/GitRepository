#include "../../std_lib_facilities.h"

int main()
{
	string number;
	int digit = -1;
	cout << "Spell a number between 0 and 4: \n";
	cin >> number;
	if ((number == "zero") || (number == "Zero"))
	{
		cout << "You just typed 0 \n";
		digit = 0;
	}
	if ((number == "one") || (number == "One"))
	{
		cout << "You just typed 1 \n";
		digit = 1;
	}
	if ((number == "two") || (number == "Two"))
	{
		cout << "You just typed 2 \n";
		digit = 2;
	}
	if ((number == "three") || (number == "Three"))
	{
		cout << "You just typed 3 \n";
		digit = 3;
	}
	if ((number == "four") || (number == "Four"))
	{
		cout << "You just typed 4 \n";
		digit = 4;
	}
	if ((digit < 0) || (digit > 4))
		cout << "Not a number that I know \n";
}