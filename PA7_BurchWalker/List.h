#pragma once

/**IMPORTS**/
#include "theEverythingHeader.h"
#include "Node.h"

/**CLASSES**/
class List //Template
{
public:
	/**CONSTRUCTOR/DESTRUCTOR**/
	List();
	~List();

	/**GETTERS**/
	Node* getHead() const;
	bool isEmpty();

	/**SETTERS**/
	void setHead(Node* const newData);
	void insertFront(Node* newNode);
private:
	/**PRIVATE DATA**/
	Node* pHead;
};

///**IMPORTS**/
//#include "List.h"
//
///**CONSTRUCTOR**/
//List::List()
//{
//	pHead = (Node*)malloc(sizeof(Node));
//}
//
///**DESTRUCTOR**/
//List::~List()
//{
//	delete pHead;
//}
//
///**GETTERS**/
//Node* List::getHead() const
//{
//	return pHead;
//}
//
//bool List::isEmpty()
//{
//	return pHead == nullptr;
//}
//
///**SETTTERS**/
//void List::setHead(Node* const newData)
//{
//	pHead = newData;
//}
//
//void List::insertFront(Node* newNode)
//{
//	if (newNode != nullptr)
//	{
//		newNode->setNext(pHead);
//		pHead = newNode;
//	}
//}
