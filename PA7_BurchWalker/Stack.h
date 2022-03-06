#pragma once

#include <string> // It felt uneccessary to import all of Resoures.h in here.
using std::string;

/**CLASSES**/
class Stack {
public:
	/**CONSTRUCTOR/DESTRUCTOR**/
	Stack();
	~Stack();

	/**SETTER**/
	void push(string newData);

	/**GETTERS**/
	string pop();
	string peek();
	bool isEmpty();
private:
	/**PRIVATE DATA**/
	int index;
	string data[100];
};