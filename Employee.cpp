#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Employee.h"

using namespace std;
namespace sdds
{
	int Employee::getHours() const {
		return min_hours;
	};

	double Employee::getRate() const {
		return pay_rate;
	};

	Employee::Employee(double rate, int hours) : min_hours{hours} {
		pay_rate = rate;
	};

	Employee::~Employee() {};

	ostream& operator<<(ostream& out, const Employee& emp) {
		// call display and return output stream.
		emp.display(out);
		return out;
	}
}