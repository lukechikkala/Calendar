/*

	Author: Luke Chikkala

	The script takes the user input of Date & Event name and stores it into a file.
	Everytime the script is run, it shows first the current existing events and provides the user the following options:
		a. Create Event
		b. Delete Event
		c. Exit

	Layout:
		=============== Calendar =========================

		   Date			Day		Event
		===========		===		==========================
		08 Aug 2021		SUN		Harvey's Birthday
		14 Aug 2021		SAT		SIN - DXB


		==================================================
		====================== End =======================
		==================================================

		a. Create Event
		b. Delete Event
		c. Exit
	
	The script should store all the previous enteries into a file named, events.txt in the followint format:

	events.txt Layout:
		   Date			Day		Event
		===========		===		==========================
		08 Aug 2021		SUN		Harvey's Birthday
		14 Aug 2021		SAT		SIN - DXB

	NEXT STEPS:
		* Append new events to the existing events.
		* Loop the script to take user inputs.
*/

// Defining the OS
//================================================
#if defined(__linux__) || defined(__linux) || defined(linux) || defined(__gnu_linux__)
	#define COMPILED_IN_LINUX
#elif defined(__APPLE__) && defined(__MACH__)
	#define COMPILED_IN_MACOS
#elif defined(_WIN32) || defined(_WIN64)
	#define COMPILED_IN_WINDOWS
#endif
//================================================

#include <iostream>
#include <string>
#include <fstream>

int dow(int day, int month, int year);
std::string date_filter(std::string date);

int main()
{
	#ifdef COMPILED_IN_LINUX
		system("clear");
	#endif
	#ifdef COMPILED_IN_MACOS
		system("clear");
	#endif
	#ifdef COMPILED_IN_WINDOWS
		system("cls");
	#endif

	// TITLE
	std::cout << "==================== Calendar ====================\n" << std::endl;

	// Taking User Input of Date
	std::string date;
	std::cout << "Enter Date [DD MMM YYYY]: ";
	getline(std::cin, date);

	std::string dayoftheweek = date_filter(date);

	// Taking User Input of Date
	std::string eventname;
	std::cout << "Enter Event Name: ";
	getline(std::cin, eventname);

	std::cout << "\n   Date\t\t" << "Day\t" << "          Event" << std::endl;
	std::cout << "===========\t===\t==========================" << std::endl;
	std::cout << date << "\t" << dayoftheweek << "\t" << eventname << std::endl;
	std::cout << "\n" << std::endl;

	// Drawing an End Line
	int row, column;
	for (row=1; row <= 3; row++)
	{
		for (column=1; column <= 50; column++)
		{
			std::cout<<"=";
			if (row==2 && column==22)
			{
				std::cout << " End ";
				column=27;
			}
		}
		std::cout << "\n";
	}

	// Writing to events.txt file
	std::ofstream events;
	events.open ("events.txt");
	events << "==================== Calendar ====================\n" << std::endl;
	events << "\n   Date\t\t" << "Day\t" << "          Event" << std::endl;
	events << "===========\t===\t==================================" << std::endl;
	events << date << "\t" << dayoftheweek << "\t" << eventname << std::endl;
	events << "\n" << std::endl;
	for (row=1; row <= 3; row++)
	{
		for (column=1; column <= 50; column++)
		{
			events << "=";
			if (row==2 && column==22)
			{
				events << " End ";
				column=27;
			}
		}
		events << "\n";
	}
	events.close();

	return 0;
}