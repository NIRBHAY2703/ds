#include<iostream>

class CNode
{
private:
	int data;
	CNode *next;

public:
	CNode(int);
	int getdata();
	void setdata(int data);

	void setnext(CNode *pnode);
	CNode* getnext();


};
