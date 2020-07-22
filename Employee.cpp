#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Employee.h"

using namespace std;

namespace sdds
{
	int Employee::getHours() const
	{
		return min_hours;
	};

	double Employee::getRate() const
	{
		return pay_rate;
	};

	// a custom constructor that receives as parameters the hourly salary and the minimum number of hours the employee must work in a week.
	Employee::Employee(int hours, double rate) : min_hours{hours}
	{
		pay_rate = rate;
	};

	// a **pure virtual query** that calculates the salary earned by the employee during a week in which she worked the number of hours specified in the parameter.  Each type of employee will use a different formula to calculate salary.
	double Employee::getSalary(int workedHours)
	{
		return workedHours * pay_rate;
	};

	// a **pure virtual query** that inserts into the stream the representation of the current instance. Each type of employee has different data to print.
	// The parameter will have `std::cout` as a default value.
	std::ostream& Employee::display(ostream& out)
	{
		out << "Pay Rate: " << pay_rate << endl << "Min Hours: " << min_hours << endl;
		return out;
	};
	
	Employee::~Employee() {};
}