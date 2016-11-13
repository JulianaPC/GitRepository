#include "../../std_lib_facilities.h"

int main()
{
	string operation;
	double operand1;
	double operand2;
	double result;
	cout << "Enter an operand followed by two values (numbers); \n";
	cin >> operation >> operand1 >> operand2;
	if ((operation == "+") || (operation == "plus"))
	{
		result = operand1 + operand2;
	}
	if ((operation == "-") || (operation == "minus"))
	{
		result = operand1 - operand2;
	}
	if ((operation == "*") || (operation == "mul"))
	{
		result = operand1 * operand2;
	}
	if ((operation == "/") || (operation == "div"))
	{
		result = operand1 / operand2;
	}

	cout << "The result of the operation is:" << result << '\n';
}