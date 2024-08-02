#include <iostream>
using namespace std;

#include "Building.h"

void Building_Init(tBuilding* pObj)
{
	pObj->Age = 0;
	pObj->IsSafe = false;
	pObj->LooksModern = false;
}

bool Building_CheckAge(tBuilding * pObj)
{
	return pObj->Age < 500;
}

bool Building_DetermineIfSafe(tBuilding * pObj)
{
	return pObj->Age < 100;
}

bool Building_LooksNice(tBuilding * pObj, bool Clean, unsigned int NumWindows)
{
	return pObj->LooksModern && Clean && NumWindows >= 1;
}

void Building_CleanUp(tBuilding* pObj)
{
	// Nothing to do since we didn't allocate any memory etc in Building_Init().
}
