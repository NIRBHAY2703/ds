#include "linkedList.h"
#include<iostream>
using namespace std;


LinkedList::LinkedList()
{
	this->head = NULL;
}
int LinkedList::isEmpty()
{
	if (this->head == NULL)
		return 0;
	else
		return 1;
}
bool LinkedList::insert(int data)
{
	CNode *newNode = new CNode(data);
	if (newNode == NULL)
		return false;
	if (this->head == NULL)
	{
		this->head = newNode;
		return true;
	}
	else
	{
		CNode * temp;
		temp = this->head;
		while (temp->getNext() != NULL)
		{
			temp = temp->getNext();
		}
		temp->setNext(newNode);
		return true;
	}
}
bool LinkedList::insertNode(int data, int position)
{
	if (position <= 0)
		return false;

	CNode *newNode = new CNode(data);
	CNode *trav = this->head;
	for (int i = 0; i < position - 1; i++)
	{
		if (trav == NULL)
		{
			delete newNode;
			return false;
		}
		else
		{
			trav = trav->getNext();
		}
	}
	newNode->setNext(trav->getNext());
	trav->setNext(newNode);
	return true;
}
bool LinkedList::removefromposition(int position)
{
	if (position > 1)
	{
		CNode *trav = this->head;
		for (int i = 1; i < position - 1; i++)
		{
			trav = trav->getNext();

			if (trav == NULL)
			{
				return false;
			}
		}
		if (trav->getNext() == NULL)
			return false;
		CNode *ptrNode = trav->getNext();
		trav->setNext(ptrNode->getNext());
		delete ptrNode;
		return true;
	}
}

void LinkedList::Display()
{
	CNode * temp = head;

	while (temp != NULL)
	{
		cout << temp->getData() << "   ";
		temp = temp->getNext();
	}
}
bool LinkedList::removeByValue(int value)
{
	CNode *temp; CNode *prev;
	prev = temp = this->head;
	while (temp->getData() != value)
	{
		prev = temp;
		temp = temp->getNext();
		if (temp == NULL)
		{
			return false;
		}
	}
	prev->setNext(temp->getNext());
	delete temp;
	return true;

}

