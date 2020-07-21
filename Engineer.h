#ifndef SDDS_ENGINEER_H
#define SDDS_ENGINEER_H
#include <iostream>

// This class should inherit from `Employee class.'
// Assume all parameters are valid.

namespace sdds
{
	class Engineer
	{
		// #### `Engineer` Private Members
		int level;			// an integer representing the level of an engineer. This value is used in calculating the salary.

	public:
		// #### `Engineer` Public Members

			// a custom constructor that receives as parameters the hourly salary and the level. The engineer must work minimum 30 hours per week.

		double getSalary(int workedHours);
		// overrides the base class function.
		// Calculates the salary according to the following rules :
		// -multiply the parameter by the hourly rate(the engineer is paid the same amount for all worked hours)
		//	- add an extra 40 dollars for each level the engineer has
		//	- if the engineer worked less than the minimum number of hours, cut 20 % of her salary.

		std::ostream& display(std::ostream& out);
		/*
			overrides the base class function.
			Inserts into the stream the content of the object in the format
			  ```txt
			  Engineer<ENDL>
			  Level: [LEVEL]<ENDL>
			  Pay Rate: [HOURLY_RATE]<ENDL>
			  Min Hours: [MIN_HOURS]<ENDL>
			  ```

			  The labels should be printed on a field of size 20, aligned to the right.
		*/

	};


}

#endif
