// Concreate Class
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Doctor.h"

using namespace std;

namespace sdds
{
	// a custom constructor that receives as parameters the type of doctor, the hourly salary, minimum numbers of hours the doctor must work in a week, and a value signaling if the doctor is a specialist.
	// The last parameter should have a default value of `false`.
	Doctor::Doctor(char* type, double rate, int hours, bool is_specialist = false) : specialist{is_specialist}
	{
		strcpy(dr_type, type);
		//pay_rate = rate;
		//min_hours = hours;
		specialist = is_specialist;
	};

	// overrides the base class function.
	// Calculates the salary according to the following rules :
	// -if the doctor worked minimum number of hours or less, multiply the parameter by the hourly rate
	//	- if the doctor worked overtime, the minimum number of hours are paid at hourly rate, and anything extra is paid at 150 % hourly rate.
	//	- if the doctor is a specialist, she receives extra 2000 regardless of the numbers of hours worked.
	double Doctor::getSalary(int workedHours)
	{
		double result = 0;
		if (workedHours <= min_hours)
		{
			result = workedHours * pay_rate;
		}
		else if (workedHours > min_hours)
		{
			result = min_hours * pay_rate + ((workedHours - minHours) * 1.5);
		};

		if (specialist)
		{
			result += 2000;
		};

		return result;
	};

}