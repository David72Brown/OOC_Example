#include <iostream>
using namespace std;

#include "Building.h"
#include "School.h"

// We have to define methods which are inherited but not overridden, just to call back to the parent class method.
// All other methods in this file are either specific to this class (i.e. not inherited) or are overeridden versions of the parent class method.
bool School_CheckAge(tSchool* pObj) { return Building_CheckAge((tBuilding*)pObj); }
bool School_DetermineIfSafe(tSchool* pObj) { return Building_DetermineIfSafe((tBuilding*)pObj); }
void School_CleanUp(tSchool* pObj) { Building_CleanUp((tBuilding*)pObj); }

void School_Init(tSchool* pObj)
{
	// We call the parent class' Init function to initialise any data we have inherited.
	Building_Init((tBuilding*)pObj);

	// Now initialise data specific to the School class.
	pObj->NumClassrooms = 0;
	pObj->IsPrivateSchool = false;
}

bool School_LooksNice(tSchool* pObj, bool Clean, unsigned int NumWindows)
{
	// For a School to be deemed to be nice-looking, it must be deemed by the parent class to be
	// a nice looking building, AND we also want a school to have a few windows so we check that too.
	return Building_LooksNice((tBuilding*)pObj, Clean, NumWindows)
		&& NumWindows >= 20;
}

unsigned int School_GetNumClassrooms(tSchool* pObj, bool IncludeStaffRoom)
{
	// No point calling back to the parent class because buildings generally don't have classrooms,
	// only schools do. We return the number of classrooms, possibly including the staff room if asked to.
	if (IncludeStaffRoom)
	{
		return pObj->NumClassrooms + 1;
	}
	else
	{
		return pObj->NumClassrooms;
	}
}
