// Testdriver.cpp : This file contains Testdriver code Implementation to test the code
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022

#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"

int main()
{
	//**************************************Starting the Employee Class**************************************//

	// Object instance of the Employee Class
	Employee Employee1;

	/*
	   * Passing in the name for the Employee SetName()
	   * Passing in the address for the Employee SetAddress()
	   * Passing in the title for the Employee SetTitle()
	*/
	Employee1.SetName("John Madden");
	Employee1.SetAddress("Hall of Madden Broadcasting Hall Of Fame");
	Employee1.SetTitle("Tourist");

	// Updated Information in Employee Class
	Employee1.PrintInfo();


	//**************************************Starting the Salaried Class**************************************//

	// Object instance of the Employee Class
	Salaried Salaried1;

	/*
	   * Passing in the name for the Salaried SetName()
	   * Passing in the address for the Salaried SetAddress()
	   * Passing in the title for the Salaried SetTitle()
	   * Passing in the Salary for the Salaried SetSalary()
	*/
	Salaried1.SetName("Steven Redneck");
	Salaried1.SetAddress("Schools Doorsteps");
	Salaried1.SetTitle("Football HC");
	Salaried1.SetSalary(-8);

	// Updated Information.
	Salaried1.PrintInfo();

	// Checking to see if the Salaried Worker can work extra hours
	bool canWorkMoreSalaried1 = Salaried1.CanWork(70, 90);
	if (canWorkMoreSalaried1 == true)
	{
		cout << "Can work more hours: yes\n\n";
	}
	else
	{
		cout << "Can work more hours: no\n\n";
	}

	// Calculating the Salaried pay for the Salaried worker
	std::cout << "Salaried Employee Pay: $"
		<< Salaried1.CalculatePay() << " for two weeks.\n\n\n";


	//**************************************Starting the Hourly Class**************************************//
	Hourly Hourly1;

	/*
	   * Passing in the name for the Hourly SetName()
	   * Passing in the address for the Hourly SetAddress()
	   * Passing in the title for the Hourly SetTitle()
	   * Passing in the wage for the Hourly SetWage()
	*/
	Hourly1.SetName("Andrew Malice");
	Hourly1.SetAddress("123 Main St, Springfield");
	Hourly1.SetTitle("Quarterback, NC. HS");
	Hourly1.SetWage(-7);
	
	// Updated Information.
	Hourly1.PrintInfo();

	// Checking to see if the Salaried Worker can work extra hours
	bool canWorkMoreHourly1 = Hourly1.CanWork(70, 20);
	if (canWorkMoreHourly1 == true)
	{
		cout << "Can work more hours: yes\n\n";
	}
	else
	{
		cout << "Can work more hours: no\n\n";
	}

	// Calculating the Hourly pay for the Hourly worker
	std::cout << "Hourly Employee Regular Pay: $"
		<< Hourly1.CalculatePay(75) << "\n";
	std::cout << "Hourly Employee Overtime Pay: $"
		<< Hourly1.CalculatePay(85) << "\n\n\n";
}