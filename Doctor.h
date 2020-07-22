#ifndef SDDS_DOCTOR_H
#define SDDS_DOCTOR_H
#include <iostream>
#include "Employee.h"

namespace sdds {
	const int MAX_CHAR = 32;
	class Doctor : public Employee {
		char dr_type[MAX_CHAR + 1];	// the type of doctor (surgeon, general medicine, family medicine, etc.) as an array of characters of size 32.
		bool specialist;			// a boolean value that is `true` if the doctor is a specialist.
	public:
		Doctor(const char* type, double rate, int hours, bool is_specialist = false);
		virtual double getSalary(int workedHours) const;
		virtual std::ostream& display(std::ostream& out = std::cout) const;
	};
}
#endif
