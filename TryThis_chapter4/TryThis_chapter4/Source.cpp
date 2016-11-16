#include "../../std_lib_facilities.h"

int main()
{
	
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int halfdollars = 0;
	double total = 0;
	string response;
	char type = ' ';
	constexpr double yuan = 0.15;
	constexpr double krone = 0.14;

	cout << "How many pennies do you have? \n";
	cin >> pennies;
	cout << "How many nickles do you have? \n";
	cin >> nickels;
	cout << "How many dimes do you have? \n";
	cin >> dimes;
	cout << "How many quarters do you have? \n";
	cin >> quarters;
	cout << "How many half dollars do you have? \n";
	cin >> halfdollars;
	total = pennies + nickels + dimes + quarters + halfdollars;

	if (pennies > 1)
	{
		cout << "You have " << pennies << " pennies \n";
	}
	else
	{
		cout << "You have " << pennies << " pennie \n";
	}

	if (nickels > 1)
	{
		cout << "You have " << nickels << " nickels \n";
	}
	else
	{
		cout << "You have " << nickels << " nickel \n";
	}

	if (dimes > 1)
	{
		cout << "You have " << dimes << " dimes \n";
	}
	else
	{
		cout << "You have " << dimes << " dime \n";
	}

	if (quarters > 1)
	{
		cout << "You have " << quarters << " quarters \n";
	}
	else
	{
		cout << "You have " << quarters << " quarter \n";
	}

	if (halfdollars > 1)
	{
		cout << "You have " << halfdollars << " half dollars \n";
	}
	else
	{
		cout << "You have " << halfdollars << " half dollar \n";
	}

	total = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfdollars * 50);


	if (total > 100)
		cout << "The value of all your coins is $" << total / 100 << " dollars \n";
	else
		cout << "The value of all your coins is $" << total / 100 << " cents \n";

	cout << "Type (y) if you want to convert to yuan or (k) if you want to convert to kroner: \n";
	cin >> type;
	switch (type)
	{
	case 'y':
		cout << "You selected yuan, the converted value is: Y" << total / yuan << " yuans \n";
		break;
	case 'k':
		cout << "You selected krone, the converted value is: K" << total / krone << " krones \n";
	    break;
	default:
		cout << "You selected an invalid currency, you have: $" << total/100 << " dollars \n";
		break;
	}

}