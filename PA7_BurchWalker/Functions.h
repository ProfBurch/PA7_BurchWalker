#pragma once

/**IMPORTS**/
#include "theEverythingHeader.h"
#include "List.h"

/**READ FROM FILES**/
void readCSVToList(List** pList);
void readMasterToList(List** pList);

/**CHECK ATTENDANCE**/
void attendanceCheck(List** pList);

/**WRITE TO FILES**/
void writeListToMaster(List* pList);

/**ASSIGNMENT BONUS**/
void editAbsence(List** pList);

/**GENERATE REPORTS**/
void generateReport(List* pList); // For all Students
void generateReport(List* pList, int attendanceThreshold); // For all Students past a threshold

/**STRING UTILS**/
string formatName(string unformatted);
string makeLowerCase(string unformatted);
