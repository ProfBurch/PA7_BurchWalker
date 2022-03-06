#pragma once

/*****************************************************************************
 * Programmer: Burch Walker
 * Class : CptS 122 Section 3
 * Programming Assignment : PA 7
 * Date : 11/15/2021
 ******************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

 /**IMPORTS**/
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <fstream>

#include "Stack.h"


/**NAMESPACE IMPORTS**/
using std::getline;
using std::ifstream;
using std::ofstream;
using std::istringstream;
using std::stringstream;
using std::string;
using std::to_string;
using std::cout;
using std::cin;
using std::endl;
using std::istream;

/**STRUCTS**/
typedef struct data { // Stored in Node objects. Stores all object data 
	int absences;     // other than the next Node.
	int recordNumber;
	int IDNumber;
	int units;
	string name;
	string email;
	string major;
	string level;
	Stack dateOfAbsences;
} Data;
