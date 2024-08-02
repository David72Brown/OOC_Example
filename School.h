#pragma once

/*	This file creates the data structure containing data for the tBuilding class,
	and lists the extern declarations for all the methods for that class.

	Just before #including "BuildingClass.h" each time, we must #define the preprocessor
	macros CLASS_DATA, CLASS_METHOD_0 etc. For each one, we either #define it so it is
	turned into something which we need in this file, or we #define it to be blank so
	the relevant lines are stripped out of "BuildingClass.h".
*/

// This bit creates the structure of data for a tBuilding.
typedef struct
{
#define CLASS_DATA(v) v;																		// E.g. CLASS_DATA(int x) becomes: int x;
#define CLASS_METHOD_0(ReturnType, MethodName)													// Defined as blank so stripped out.
#define CLASS_METHOD_1(ReturnType, MethodName, ParamType1, ParamName1)							// Defined as blank so stripped out.
#define CLASS_METHOD_2(ReturnType, MethodName, ParamType1, ParamName1, ParamType2, ParamName2)	// Defined as blank so stripped out.
#include "SchoolClass.h"
} tSchool;

// Before #defining these anything new, we must undefine them, otherwise the preprocessor will complain about duplicated definitions.
#undef CLASS_DATA
#undef CLASS_METHOD_0
#undef CLASS_METHOD_1
#undef CLASS_METHOD_2

// This bit lists the extern declarations for all the methods. CLASS_DATA(v) is defined as blank so it is stripped out.
#define CLASS_DATA(v)
#define CLASS_METHOD_0(ReturnType, MethodName)													extern ReturnType School_##MethodName (tSchool *pObj);
#define CLASS_METHOD_1(ReturnType, MethodName, ParamType1, ParamName1)							extern ReturnType School_##MethodName (tSchool *pObj, ParamType1 ParamName1);
#define CLASS_METHOD_2(ReturnType, MethodName, ParamType1, ParamName1, ParamType2, ParamName2)	extern ReturnType School_##MethodName (tSchool *pObj, ParamType1 ParamName1, ParamType2 ParamName2);
#include "SchoolClass.h"

#undef CLASS_DATA
#undef CLASS_METHOD_0
#undef CLASS_METHOD_1
#undef CLASS_METHOD_2
