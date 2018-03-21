/*File: program7.cpp
Author: Amanda Chaffin
Student ID: R966E924
Assignment Number:7
Description: C++ program that uses a function to print a calendar using program4.
Last Changed: March 26, 2015
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main(void)
{
	int leap_year, start_day, i, attempts, month;
	
	do 
	{	
		attempts++;
	
	while ( leap_year != 1 || 0)
	{
		cout << "Is the year a leap year (0=No, 1=Yes)? ";
		cin >> leap_year;
	}
	while (!(start_day >=1 && start_day <= 7))
	{
		cout << "Enter day of week on which year starts (1=Sun, 7=Sat): ";
		cin >> start_day;
	}
	 if (attempts = 3)
	 {
		 cout << "Inputs cannot be used. Quitting program. \n";
	 }
	 
	} while ( attempts < 3);

	
	for ( i=1, i < 12, i++)
	{

		cout << print_month(leap_year, start_day);
	}
	
	return 0;
}

int print_month(int num_days, int start_day)
{
	int num_blanks, num_of_days, days, month;
		// print calendar
		month ==
	cout << endl;
	cout <<" Sun Mon Tue Wed Thu Fri Sat" << endl;
	num_blanks = start_day - 1;

	// print blanks spaces before first day
	for (days = 0; days < num_blanks; days++)
	{
		cout << setw(4) << " ";
	}
	// print each day
	for(days = 1; days <= num_of_days; days++)
	{
		cout << setw(4) << days;
		if ( (days + num_blanks) % 7 == 0)
		{
			cout<< endl;
		}			
	}
	cout<< endl;
	
return month;
}