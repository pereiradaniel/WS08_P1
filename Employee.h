#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H
#include <iostream>

namespace sdds
{
	class Employee
	{
	// #### `Employee` Private Members
		const int MIN_WEEKLY_HOURS;	// a **constant** integer representing the minimum number of hours an employee must work in a week.
		double hourly_salary;		// a number representing the hourly salary of the employee, as a floating point number in double precision.

	// #### `Employee` Protected Members
			
		// two queries to retrieve the values of the two attributes(minimum working hours and hourly salary).

	public:
	// #### `Employee` Public Members

		// This class will** NOT** have a default constructor!
		
		// a custom constructor that receives as parameters the hourly salary and the minimum number of hours the employee must work in a week.
		
		double getSalary(int workedHours);
			// a **pure virtual query** that calculates the salary earned by the employee during a week in which she worked the number of hours specified in the parameter.  Each type of employee will use a different formula to calculate salary.

		std::ostream& display(ostream& out);
			// a **pure virtual query** that inserts into the stream the representation of the current instance. Each type of employee has different data to print.
			// The parameter will have `std::cout` as a default value.
		
			// a **virtual**, empty-body, destructor.
	};

	// #### Free Helper Functions

		// 	overload the insertion operators to insert an `Employee` into a stream.This operator should call the `display` member function of the class `Employee`.

		//	In the previous workshop you had to overload this operator for each class on the hierarchy, but in this workshop you only overload it here.Why is working properly in this workshop but not in the previous one ? Note that the function `display` has no implementation in this class.
}

#endif
