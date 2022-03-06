/**IMPORTS**/
#include "Stack.h"

/**CONSTRUCTOR**/
Stack::Stack() { index = -1; }

/**DESTRUCTOR**/
Stack::~Stack() { // I don't think this is ever called, but keeping it in to be safe.
	while (!isEmpty())
		pop();
}

/**GETTER**/
void Stack::push(string newData) {
	index++;
	data[index] = newData;
}

/**SETTERS**/
string Stack::pop() {
	string temp = peek();

	data[index] = "";
	index--;

	return temp;
}

string Stack::peek() {
	return data[index];
}

bool Stack::isEmpty() {
	if (index == -1)
		return true;
	return false;
}