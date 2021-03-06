#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "Engineer.h"

using namespace std;
namespace sdds {
	Engineer::Engineer(double rate, int level) : Employee(rate, 30) {
		m_level = level;
	};
	
	double Engineer::getSalary(int workedHours) const {
		int min_hours = Employee::getHours();
		double pay_rate = Employee::getRate();
		double result = (double)workedHours * pay_rate;

		for (int i = 0; i < m_level; i++) {
			result += 40;
		}

		if (workedHours < min_hours) {
			result -= (result * .2);
		}

		return result;
	};

	ostream& Engineer::display(ostream& out) const {
		out << "Engineer" << endl
			<< setw(20) << right << "Level: " << m_level << endl
			<< setw(20) << right << "Pay Rate: " << Employee::getRate() << endl
			<< setw(20) << right << "Min Hours: " << Employee::getHours() << endl;
		return out;
	};
}