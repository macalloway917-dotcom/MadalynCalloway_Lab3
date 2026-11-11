// =================================
// Tip Calculator
// Inputs: price and tip percentage
// Output: Tip and Total after tip
// =================================

#include <iostream>
using namespace std;

// Function 1: Calculate the tip
double calculate_tip(double initial_price, double percentage)
{
	return (initial_price * (percentage / 100));
}

// Function 2: Calculate total after tip
double calculate_total(double initial_price, double tip)
{
	return (initial_price + tip);
}

int main() {
	// Declare variables
	int price, percentage;
	bool invalid = 1;

	while (invalid)
	{
		// Recieve input from user
		cout << "Enter price: ";
		cin >> price;
		cout << "Enter percentage (10, 20, 25): ";
		cin >> percentage;

		// Check validity
		if (price < 0 || percentage < 0)
		{
			cout << "Invalid tip input. Try again:\n";
		}
		else
		{
			invalid = 0;
		}
	}

	// Call functions
	double total_tip = calculate_tip(price, percentage);
	double total_price = calculate_total(price, total_tip);

	// Display output
	cout << "Tip amount: $" << total_tip << endl;
	cout << "Total after tip: $" << total_price << endl;

	return 0;
}