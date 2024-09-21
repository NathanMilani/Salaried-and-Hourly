// Salaried.cpp : This file contains Salaried code Implementation
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022



#include "Salaried.h"

Salaried::Salaried()
{
    // Set the default value for annualSalary
    annualSalary = 47000;

	cout << "My name is Nathan Milani. Welcome to Milani Technologies Solutions, Salaried Class.\n\n";

}
Salaried::Salaried(string myName, string myAddress, string myTitle, float mySalary)
{
	SetName(myName);
	SetAddress(myAddress);
	SetTitle(myTitle);
	SetEmployeeNum();
	if (mySalary < 0)
	{
		mySalary = abs(mySalary);
	}
	if (mySalary < 47000) {
		annualSalary = 47000;  // Apply the minimum wage constraint
	}
	else {
		annualSalary = mySalary;
	}

	SetSalary(mySalary);
	
	cout << "\nMy name is Nathan Milani. Welcome to Milani Technologies Solutions, Salaried Employee Class.\n\n";
}

Salaried::~Salaried()
{
	cout << "Get out of here! We have better minds than you who sits on his couch. \n\n";
}

float Salaried::GetSalary()
{
	return annualSalary;
}
void Salaried::SetSalary(float mySalary)
{
	if(mySalary < 0)
	{
		mySalary = abs(mySalary);

	}
	if (mySalary >= 47000) 
	{
		annualSalary = mySalary;
	}
}
bool Salaried::CanWork(int hoursWorked, int hoursProposed)
{
	return (hoursWorked + hoursProposed <= MAXHOURS);
}
float Salaried::CalculatePay()
{
	return abs((annualSalary / 26));
}
void Salaried::PrintInfo()
{
	Employee::PrintInfo(true, annualSalary);
}