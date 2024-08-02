#include <iostream>
using namespace std;

#include "HighSchool.h"

int main()
{
    tHighSchool MyHighSchool;
    bool IsOK;
    unsigned int AverageGrade, NumClassrooms;

    HighSchool_Init(&MyHighSchool);
    IsOK = HighSchool_CheckAge(&MyHighSchool);
    NumClassrooms = HighSchool_GetNumClassrooms(&MyHighSchool, true);
    AverageGrade = HighSchool_GetAverageGrade(&MyHighSchool);
}
