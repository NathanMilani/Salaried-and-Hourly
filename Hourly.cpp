// Hourly.cpp : This file contains Hourly code Implementation
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022



#include "Hourly.h"

Hourly::Hourly()
{
	hourlyWage = 8.75;
	cout << "My name is Nathan Milani. Welcome to Milani Technologies Solutions, Hourly Class.\n\n";

}

Hourly::Hourly(string myName, string myAddress, string myTitle, float myWage)
{
	SetName(myName);
	SetAddress(myAddress);
	SetTitle(myTitle);
	SetEmployeeNum();
	SetWage(myWage);	
	if (myWage < 0)
	{
		myWage = abs(myWage);
	}
	if (myWage < 8.75) {
		hourlyWage = 8.75;  // Apply the minimum wage constraint
	}
	else {
		hourlyWage = myWage;
	}
	cout << "My name is Nathan Milani. Welcome to Milani Technologies Solutions, Hourly Class.\n\n";

}

Hourly::~Hourly()
{
	cout << "Get out of here! We have better minds than you who sits on his couch. \n\n";

}

float Hourly::GetWage()
{
	return hourlyWage;
}

void Hourly::SetWage(float myWage)
{
	
	if (myWage < 0)
	{
		myWage = abs(myWage);

	}
	if (myWage >= 8.75)
	{
		hourlyWage = myWage;
	}
}

bool Hourly::CanWork(int hoursWorked, int hoursProposed)
{
	return (hoursWorked + hoursProposed <= MAXHOURS);
}


// Expected error with line 69's return with converting a double to a float
float Hourly::CalculatePay(int hoursWorked)
{
	if (hoursWorked <= MAXHOURS)
	{
		return abs(hourlyWage * hoursWorked);
	}
	else
	{
		int overtime = hoursWorked - MAXHOURS;
		return abs(MAXHOURS * hourlyWage) + (overtime * hourlyWage * 1.50f); 
	}
}

void Hourly::PrintInfo()
{
	Employee::PrintInfo(false, hourlyWage);
}