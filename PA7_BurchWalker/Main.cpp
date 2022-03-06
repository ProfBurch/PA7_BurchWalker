/**IMPORTS**/
#include "Menu.h"

int main(void)
{
	Menu menu = Menu();								// Create Menu object

	List* pList = (List*)malloc(sizeof(List));	    // Create List object and allocate space for it.
	pList->setHead(NULL);							// Set head of List `pList` to NULL.

	cin >> menu;									// Print the Menu using the overridden >> operator.
	while (menu.execute(&pList))					// While the user hasn't selected to exit, run.
	{
		cin >> menu;
	}

	free (pList);									// Clean up
}