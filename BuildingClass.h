// This file contains the data and methods pertaining to a tBuilding.

CLASS_DATA(unsigned int Age)
CLASS_DATA(bool IsSafe)
CLASS_DATA(bool LooksModern)

CLASS_METHOD_0(void, Init)
CLASS_METHOD_0(bool, CheckAge)
CLASS_METHOD_0(bool, DetermineIfSafe)
CLASS_METHOD_2(bool, LooksNice, bool, Clean, unsigned int, NumWindows)
CLASS_METHOD_0(void, CleanUp)
