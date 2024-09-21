// Employee.cpp : This file contains Employee code Implementation
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022

#include "Employee.h"

int Employee::generateEmployeeNumber() 
{
	this_thread::sleep_for(chrono::seconds(2));

	// Get the current time
	time_t current_time;
	time(&current_time);

	// Seed the random number generator with the current time
	std::srand(current_time);

	// Declare a  variable to hold the random number
	int randomNumber = rand();

	// Output the random number
	return randomNumber;
}

Employee::Employee()
{
	name = DEFAULT_VALUE;
	address = DEFAULT_VALUE;
	title = DEFAULT_VALUE;
	SetEmployeeNum();
	cout << "Welcome to the People of Technology, Employee class by Nathan Milani! \n\n";


}

Employee::~Employee()
{
	cout << "Your Fired! We found two better minds than you who simply playes around. \n\n";
}

void Employee::SetEmployeeNum()
{
	employeeNum = generateEmployeeNumber();
}

string Employee::GetName()
{
	return name;
}

void Employee::SetName(string myName)
{
	name = myName;
}

string Employee::GetAddress()
{
	return address;
}

void Employee::SetAddress(string myAddress)
{
	address = myAddress;
}

string Employee::GetTitle()
{
	return title;
}

void Employee::SetTitle(string myTitle)
{
	title = myTitle;
}

int Employee::GetEmployeeNum()
{
	return employeeNum;
}

// There is a expected error with this functions arguments and and condition
void Employee::PrintInfo(bool Classname, float wage)
{
	cout << "Employee Information:\n"
		<< name << ", Employee# " << employeeNum << "\n"
		<< address << "\n"
		<< title;
	
	// Checking to see if the Classifacation is Salary or Hourly
	if (wage > 0)
	{
		if (Classname)
		{
			cout << ", at $" << wage << " per year.";
		}
		else
		{
			cout << ", at $" << wage << " per hour.";
		}
	}
	cout << "\n\n";
}

bool Employee::CanWork(int hoursWorked, int hoursProposed)
{
	return false;
}

float Employee::CalculatePay()
{
	return 0.0;
}