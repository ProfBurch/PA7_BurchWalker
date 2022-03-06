/**IMPORTS**/
#include "List.h"

/**CONSTRUCTOR**/
List::List()
{
	pHead = (Node*)malloc(sizeof(Node));
}

/**DESTRUCTOR**/
List::~List()
{
	delete pHead;
}

/**GETTERS**/
Node* List::getHead() const
{
	return pHead;
}

bool List::isEmpty()
{
	return pHead == nullptr;
}

/**SETTTERS**/
void List::setHead(Node* const newData)
{
	pHead = newData;
}

void List::insertFront(Node* newNode)
{
	if (newNode != nullptr)
	{
		newNode->setNext(pHead);
		pHead = newNode;
	}
}
