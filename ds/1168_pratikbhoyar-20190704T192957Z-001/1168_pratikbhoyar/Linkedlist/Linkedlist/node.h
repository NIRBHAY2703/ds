#include<iostream>
class CNode
{
private:
	int data;
	CNode *next;
public:
	CNode();
	CNode(int);
	void setData(int);
	int getData()const;
	void setNext(CNode*);
	CNode* getNext()const;
};

