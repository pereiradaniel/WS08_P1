#ifndef SDDS_DOCTOR_H
#define SDDS_DOCTOR_H
#include <iostream>

// This class should inherit from `Employee class.'
// Assume all parameters are valid.

namespace sdds
{
	class Doctor
	{
	// #### `Doctor` Private Members
		char dr_type[32];	// the type of doctor (surgeon, general medicine, family medicine, etc.) as an array of characters of size 32.
		bool specialist;	// a boolean value that is `true` if the doctor is a specialist.

	public:
	// #### `Doctor` Public Members

		// a custom constructor that receives as parameters the type of doctor, the hourly salary, minimum numbers of hours the doctor must work in a week, and a value signaling if the doctor is a specialist.The last parameter should have a default value of `false`.

		double getSalary(int workedHours);
			// overrides the base class function.
			// Calculates the salary according to the following rules :
			// -if the doctor worked minimum number of hours or less, multiply the parameter by the hourly rate
			//	- if the doctor worked overtime, the minimum number of hours are paid at hourly rate, and anything extra is paid at 150 % hourly rate.
			//	- if the doctor is a specialist, she receives extra 2000 regardless of the numbers of hours worked.

		std::ostream& display(std::ostream& out);
			/*
				overrides the base class function.Inserts into the stream the content of the object in the format
					```txt
					Doctor<ENDL>
					Type: [TYPE] <ENDL>
					Pay Rate : [HOURLY_RATE] <ENDL>
					Min Hours : [MIN_HOURS] <ENDL>
					```

					If the doctor is a specialist, use the format :

				```txt
					Doctor<ENDL>
					Type: [TYPE] (specialist) < ENDL >
					Pay Rate : [HOURLY_RATE] <ENDL>
					Min Hours : [MIN_HOURS] <ENDL>
					```

					The labels should be printed on a field of size 16, aligned to the right.
			*/

	};


}

#endif
