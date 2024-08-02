// This file contains the data and methods pertaining to a tHighSchool.

// First we inherits all the data and methods from the tBuilding class
#include "SchoolClass.h"

// Now we add new data and methods pertaining to a tHighSchool.
CLASS_DATA (bool HasScienceLab)
CLASS_DATA (bool HasSixthForm)

CLASS_METHOD_0(unsigned int, GetAverageGrade)
CLASS_METHOD_0(bool, HasScienceLabAndSixthForm)
