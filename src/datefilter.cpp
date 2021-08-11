#include <iostream>
#include <string>

int dow(int day, int month, int year);

std::string date_filter(std::string date)
{
	// Filter: Date
	std::string date_only = date;
	date_only.erase(date_only.begin()+2,date_only.end());
	int day = stoi(date_only);										// stoi() is a C++11 function that converts strings to integers.

//	End of:	DATE ==================================

	// Filter: Month
	std::string month_only = date;
	month_only.erase(month_only.begin(), month_only.end()-8);
	month_only.erase(month_only.begin()+3, month_only.end());

	int month;
	if (month_only == "Jan")
	{
		month = 1;
	}
	else if (month_only == "Feb")
	{
		month = 2;
	}
	else if (month_only == "Mar")
	{
		month = 3;
	}
	else if (month_only == "Apr")
	{
		month = 4;
	}
	else if (month_only == "May")
	{
		month = 5;
	}
	else if (month_only == "Jun")
	{
		month = 6;
	}
	else if (month_only == "Jul")
	{
		month = 7;
	}
	else if (month_only == "Aug")
	{
		month = 8;
	}
	else if (month_only == "Sep")
	{
		month = 9;
	}
	else if (month_only == "Oct")
	{
		month = 10;
	}
	else if (month_only == "Nov")
	{
		month = 11;
	}
	else if (month_only == "Dec")
	{
		month = 12;
	}
	else
	{
		std::cout << month_only << std::endl;
	}

//	End of:	MONTH =================================

	// Filter: Year
	std::string year_only = date;
	year_only.erase(year_only.begin(), year_only.end()-4);
	int year = stoi(year_only);

//	End of:	YEAR ==================================

	// dow Function Usage
	int day_only = dow(day, month, year);

	std::string dayoftheweek;
	if (day_only == 0)
	{
		dayoftheweek = "SUN";
	}
	else if (day_only == 1)
	{
		dayoftheweek = "MON";
	}
	else if (day_only == 2)
	{
		dayoftheweek = "TUE";
	}
	else if (day_only == 3)
	{
		dayoftheweek = "WED";
	}
	else if (day_only == 4)
	{
		dayoftheweek = "THU";
	}
	else if (day_only == 5)
	{
		dayoftheweek = "FRI";
	}
	else if (day_only == 6)
	{
		dayoftheweek = "SAT";
	}
	else
	{
		std::cout << "ERROR" << std::endl;
	}

//	End of:	DAY OF THE WEEK ===============================================
	return dayoftheweek;
}