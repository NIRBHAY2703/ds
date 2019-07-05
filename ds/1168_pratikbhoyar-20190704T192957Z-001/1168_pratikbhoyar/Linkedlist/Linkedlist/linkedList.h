#include"node.h"
class LinkedList
{
private:
	CNode *head;

public:
	LinkedList();
	int isEmpty();
	bool insert(int);
	bool insertNode(int, int);
	bool removefromposition(int);
	bool removeByValue(int);
	void Display();

};

