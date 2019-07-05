#include"CNode.h"
CNode::CNode(int data)
{

	this->data = data;
}
int CNode::getdata()
{
	return data;
}
void CNode::setdata(int data)
{
	this->data = data;
}

void CNode::setnext(CNode *pnode)
{
	this->next = pnode;

}
CNode* CNode::getnext()
{
	return next;
}