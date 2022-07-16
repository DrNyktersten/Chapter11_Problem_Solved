#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

struct CompanyDivision
{
	string DivisionName; 
	double First_QuarterSales = 0,
  		   Second_QuarterSales = 0,
		   Third_QuarterSales = 0,
		   Fourth_QuarterSales = 0,
		   Total_AnnualSales = 0,
		   Average_QuarterlySales = 0;
};

void getCompanyDivision(CompanyDivision*);
void displayCompanyDivision(CompanyDivision*); 

int main()
{
	CompanyDivision East, West, North, South; 

	//Get the info about Company Division Sales
	getCompanyDivision(&East); 
	getCompanyDivision(&West); 
	getCompanyDivision(&North); 
	getCompanyDivision(&South); 

	//Display the Company Division Sales
	displayCompanyDivision(&East); 
	displayCompanyDivision(&West); 
	displayCompanyDivision(&North); 
	displayCompanyDivision(&South); 

	return 0; 
}

void getCompanyDivision(CompanyDivision* CD)
{
	//Get the Division Name
	cout << "Division Name: "; 
	getline(cin, CD->DivisionName); 

	//Get the First Quarter Sales
	cout << "First Quarter Sales: "; 
	cin >> CD->First_QuarterSales; 

	while (CD->First_QuarterSales < 0)
	{
		cout << endl; 
		cout << "Error. Please enter positive value for " << endl
			 << "First Quarter Sales: ";
		cin >> CD->First_QuarterSales; 
	}

	//Get the Second Quarter Sales
	cout << "Second Quarter Sales: "; 
	cin >> CD->Second_QuarterSales; 
	
	while (CD->Second_QuarterSales < 0)
	{
		cout << endl;
		cout << "Error. Please enter positive value for " << endl
			<< "Second Quarter Sales: ";
		cin >> CD->Second_QuarterSales;
	}

	//Get the Third Quarter Sales
	cout << "Third Quarter Sales: "; 
	cin >> CD->Third_QuarterSales; 

	while (CD->Third_QuarterSales < 0)
	{
		cout << endl;
		cout << "Error. Please enter positive value for " << endl
			<< "Third Quarter Sales: ";
		cin >> CD->Third_QuarterSales;
	}

	//Get the Fourth Quarter Sales
	cout << "Fourth Quarter Sales: "; 
	cin >> CD->Fourth_QuarterSales; 

	while (CD->Fourth_QuarterSales < 0)
	{
		cout << endl;
		cout << "Error. Please enter positive value for " << endl
			<< "Fourth Quarter Sales: ";
		cin >> CD->Fourth_QuarterSales;
	}

	//Calculate the Total Annual Sales
	CD->Total_AnnualSales = CD->First_QuarterSales + CD->Second_QuarterSales +
							CD->Third_QuarterSales + CD->Fourth_QuarterSales; 

	//Calculate the Average Quarterly Sales
	CD->Average_QuarterlySales = CD->Total_AnnualSales / 4.0; 
	cin.ignore();	//To ignore newline characters  
	cout << endl; 
}

void displayCompanyDivision(CompanyDivision* CDN)
{
	cout << endl << endl; 
	cout << fixed << showpoint << setprecision(2); 
	cout << "Division Name: " << CDN->DivisionName << endl; 
	cout << "First Quarter Sales: $" << CDN->First_QuarterSales << endl; 
	cout << "Second Quarter Sales: $" << CDN->Second_QuarterSales << endl;
	cout << "Third Quarter Sales: $" << CDN->Third_QuarterSales << endl;
	cout << "Fourth Quarter Sales: $" << CDN->Fourth_QuarterSales << endl;
	cout << "Total Annual Sales: $" << CDN->Total_AnnualSales << endl; 
	cout << "Average Quarterly Sales: $" << CDN->Average_QuarterlySales << endl; 
}