#include "Stack.h"

Stack::Stack()
{
	head = NULL;
}
bool Stack::Push(int data)
{
	CNode *newnode = new CNode(data);
	if (newnode == NULL)
	{

		return false;
	}
	newnode->setdata(data);
	newnode->setnext(head);
	head = newnode;
	return true;



}
bool Stack::Pop()
{
	CNode * del = head;
	if (head == NULL)
	{

		return false;
	}


	head = del->getnext();
	delete del;
	return true;
}
void Stack::display()
{
	CNode* temp = head;
	if (head == NULL)
		cout << "stack is empty";
	else {
		temp = head;
		cout << "Stack elements are: ";
		while (temp != NULL)
		{
			cout << "  " << temp->getdata();
			temp = temp->getnext();
		}
	}
	cout << endl;
}
