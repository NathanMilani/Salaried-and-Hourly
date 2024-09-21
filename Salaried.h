// Salaried.h : This file contains Salaried Class declaration
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022

#pragma once
#include "Employee.h"

class Salaried: public Employee
{ 
private:
	float annualSalary = 47000;
	const int MAXHOURS = 160;

public:
	Salaried();
	Salaried(string myName, string myAddress, string myTitle, float mySalary);
	~Salaried();

	float GetSalary();
	void SetSalary(float mySalary);
	bool CanWork(int hoursWorked, int hoursProposed);
	float CalculatePay();
	void PrintInfo();
};