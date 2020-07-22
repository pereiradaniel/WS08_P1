#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
#include <iostream>

namespace sdds {
	class Employee {
		const int min_hours;	// a **constant** integer representing the minimum number of hours an employee must work in a week.
		double pay_rate;		// a number representing the hourly salary of the employee, as a floating point number in double precision.
	protected:
		int getHours() const;
		double getRate() const;
	public:
		Employee(double rate, int hours);
		virtual double getSalary(int workedHours) const = 0;
		virtual std::ostream& display(std::ostream& out = std::cout) const = 0;
		virtual ~Employee();
	};
	std::ostream& operator<<(std::ostream& out, const Employee& emp); // duplicates display but not a member of the class!
}

#endif
