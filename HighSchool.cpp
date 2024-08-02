#include <iostream>
using namespace std;

#include "School.h"
#include "HighSchool.h"

// We have to define methods which are inherited but not overridden, just to call back to the parent class method.
// All other methods in this file are either specific to this class (i.e. not inherited) or are overeridden versions of the parent class method.
bool HighSchool_CheckAge(tHighSchool* pObj) { return School_CheckAge((tSchool*)pObj); }
bool HighSchool_DetermineIfSafe(tHighSchool* pObj) { return School_DetermineIfSafe((tSchool*)pObj); }
void HighSchool_CleanUp(tHighSchool* pObj) { School_CleanUp((tSchool*)pObj); }
unsigned int HighSchool_GetNumClassrooms(tHighSchool* pObj, bool IncludeStaffRoom) { return School_GetNumClassrooms((tSchool*)pObj, IncludeStaffRoom); }

void HighSchool_Init(tHighSchool* pObj)
{
	// We call the parent class' Init function to initialise any data we have inherited.
	School_Init((tSchool*)pObj);

	// Now initialise data specific to the HighSchool class.
	pObj->HasScienceLab = false;
	pObj->HasSixthForm = false;
}

bool HighSchool_LooksNice(tHighSchool* pObj, bool Clean, unsigned int NumWindows)
{
	// For a High School to be deemed to be nice-looking, it must be deemed by the parent class to be
	// a nice looking school, AND we also want a high school to have lots of windows so we check that too.
	return School_LooksNice((tSchool*)pObj, Clean, NumWindows)
		&& NumWindows >= 30;
}

unsigned int HighSchool_GetAverageGrade(tHighSchool* pObj)
{
	// This method is specific to the HighSchool class and indicates the average grade obtained by students.
	return 3;
}
