#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Weather
{
	double rainfall;
	double high_temp;
	double low_temp;
	double avg_temp;
};


int main()
{
	const int NUM_MONTHS = 12;   //Number of Months
	Weather months[NUM_MONTHS];  //Array of 12 months
	int index;                   //Loop counter

	double annualRainfall = 0.0, averageRainfall;


	// Get rainfall for each month.
	for (int index = 0; index < NUM_MONTHS; index++)
	{
		// Get months rainfall
		cout << "Enter the rainfall in inches for month #:";
		cout << (index + 1) << ": ";
		cin >> months[index].rainfall;
		annualRainfall += months[index].rainfall;
		averageRainfall = annualRainfall / 12;

	}
	// Display total rainfall.
	cout << "The total rainfall for the year is ";
	cout << annualRainfall
		<< " inches." << endl;

	// Display the average rainfall from the year
	cout << "The average rainfall for the year is ";
	//float average = months[index].rainfall / 12;
	cout << averageRainfall << " inches." << endl;

	cin.get();
	return 0;
}