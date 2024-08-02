// This file contains the data and methods pertaining to a tSchool.

// First we inherits all the data and methods from the tBuilding class
#include "BuildingClass.h"

// Now we add new data and methods pertaining to a tSchool.
CLASS_DATA(unsigned int NumClassrooms)
CLASS_DATA(bool IsPrivateSchool)

CLASS_METHOD_0(void, Init)
CLASS_METHOD_2(bool, LooksNice, bool, Clean, unsigned int, NumWindows)
CLASS_METHOD_1(unsigned int, GetNumClassrooms, bool, IncludeStaffRoom)
CLASS_METHOD_0(void, CleanUp)
