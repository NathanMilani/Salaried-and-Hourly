// Employee.h : This file contains Employee Class declaration
// Class assignment for Program 1B
// Author: Nathan Milani – This is my own work!
// I understand that I may be asked questions about my submission.
// email: nrm0002@uah.edu
// For: CS221-01, Fall 2023 Mrs. Delugach
// Using compiler MSVS 2022


#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>  // For sleep_for
#include <chrono>  // For milliseconds
#include <random>  // for random number generation
#include <ctime>  // for seeding the random number generator
#include <cmath>
using namespace std;


class Employee
{
private:
	string name = "";
	string address = "";
	string title = "";
	int employeeNum;
	
	const string DEFAULT_VALUE = "UNASSIGNED";

	int generateEmployeeNumber();

public:
	Employee();
	~Employee();

	string GetName();
	void SetName(string myName);
	string GetAddress();
	void SetAddress(string myAddress);
	string GetTitle();
	void SetTitle(string myTitle);
	int GetEmployeeNum();
	void PrintInfo(bool Classname = false, float wage = 0.0);
	bool CanWork(int hoursWorked, int hoursProposed);
	float CalculatePay();

protected:
	void SetEmployeeNum();






};

