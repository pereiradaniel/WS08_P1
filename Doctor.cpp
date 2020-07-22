#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Doctor.h"

using namespace std;
namespace sdds {
	Doctor::Doctor(const char* type, double rate, int hours, bool is_specialist)  : Employee(rate, hours) {
		strncpy(dr_type, type, MAX_CHAR + 1);
		specialist = is_specialist;
	};

	double Doctor::getSalary(int workedHours) const	{
		int min_hours = Employee::getHours();
		double pay_rate = Employee::getRate();
		double result = 0;
		
		if (workedHours <= min_hours) {												// Dr worked min hours or less, use hourly rate.	
			result = workedHours * pay_rate;
		}
		else if (workedHours > min_hours) {											// Dr worked overtime, use normal rate + 150% overtime.
			int hour_diff = workedHours - min_hours;
			result = (double)min_hours * pay_rate + ((double)hour_diff * (pay_rate * 1.5));
		};

		if (specialist) {																// If Dr is specialist, add 2000.
			result += 2000;
		};

		return result;
	};

	ostream& Doctor::display(ostream& out) const {
		out << "Doctor" << endl
			<< setw(16) << right << "Type: " << dr_type << (specialist ? " (specialist)" : "") << endl
			<< setw(16) << right << "Pay Rate: " << Employee::getRate() << endl
			<< setw(16) << right << "Min Hours: " << Employee::getHours() << endl;
		return out;
	};
}