#ifndef SDDS_ENGINEER_H
#define SDDS_ENGINEER_H
#include <iostream>
#include "Employee.h"

namespace sdds {
	class Engineer : public Employee {
		int m_level;
	public:
		Engineer(double rate, int level);
		virtual double getSalary(int workedHours) const;
		virtual std::ostream& display(std::ostream& out) const;
	};
}
#endif
