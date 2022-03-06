#pragma once

/**IMPORTS**/
#include "Functions.h"

/**CLASSES**/
class Menu 
{
public:
	/**CONSTRUCTOR/DESTRUCTOR**/
	Menu();
	~Menu() {};

	/**GETTER**/
	int get_menu();

	/**SETTER**/
	void set_menu(int newMenu);

	/**MISC.**/
	void display();
	bool execute(List** pList);

private:
	/**PRIVATE DATA**/
	int menu_choice;
};

/**NON-MEMBER FUNCTIONS**/
istream& operator >> (istream& in, Menu& menu);
