// Hourly.h : This file contains Hourly Class declaration
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022


#pragma once
#include "Employee.h"

class Hourly:public Employee
{
private:
	float hourlyWage = 8.75; // Ask if this is correct in the requirements.

	const int MAXHOURS = 80;
public:
	Hourly();
	Hourly(string myName, string myAddress, string myTitle, float myWage);
	~Hourly();

	float GetWage();
	void SetWage(float myWage);
	bool CanWork(int hoursWorked, int hoursProposed);
	float CalculatePay(int hoursWorked);
	void PrintInfo();
};