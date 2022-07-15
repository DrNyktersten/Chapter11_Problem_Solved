#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
	string Title;
	string Director;
	int YearRelease = 0;
	int RunningTime = 0;
	string ProductionCost; 
	int FirstYearRevenue = 0; 
};

void getMovieData(MovieData*);
void displayMovieData(MovieData*);

int main()
{
	MovieData Movie1, Movie2;

	//Get the info about movie1
	getMovieData(&Movie1);

	//Get the info about movie2
	getMovieData(&Movie2);

	//Display the Movie Data on Movie1
	displayMovieData(&Movie1);

	//Display the Movie Data on Movie2
	displayMovieData(&Movie2);
	system("pause");
	return 0;
}

void getMovieData(MovieData* M)
{
	//Get the Title. 
	cout << "Title: ";
	getline(cin, M->Title);

	//Get the director name. 
	cout << "Director name: ";
	getline(cin, M->Director);

	//Get the year released. 
	cout << "Year released: ";
	cin >> M->YearRelease;

	//Get the Running time. 
	cout << "Running time: ";
	cin >> M->RunningTime;
	cin.ignore(); 

	//Get the Movie's production cost
	cout << "Production cost: "; 
	getline(cin, M->ProductionCost);

	//Get the First year revenue 
	cout << "First year revenue: "; 
	cin >> M->FirstYearRevenue; 
	cin.ignore();	//To ignore newline characters 
	cout << endl;
}

void displayMovieData(MovieData* M)
{
	cout << endl;
	cout << "Title name: " << M->Title << endl;
	cout << "Director name: " << M->Director << endl;
	cout << "Year release: " << M->YearRelease << endl;
	cout << "Running time: " << M->RunningTime << endl;
	cout << "Movie's production cost: $" << M->ProductionCost << endl;
	cout << "First year revenue: $" << M->FirstYearRevenue << " million ";
	if (M->FirstYearRevenue >= 0)
		cout << "profit";
	else
		cout << "loss"; 
	cout << endl; 
}