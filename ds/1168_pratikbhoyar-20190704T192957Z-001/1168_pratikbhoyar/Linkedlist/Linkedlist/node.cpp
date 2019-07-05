#include "node.h"
#include<iostream>
using namespace std;

CNode::CNode()
{
	this->data = 0;
	this->next = NULL;
}
CNode::CNode(int data)
{
	this->data = data;
	this->next = NULL;
}
void CNode::setData(int data)
{
	this->data = data;
}
int CNode::getData()const
{
	return data;
}
void CNode::setNext(CNode *temp)
{
	this->next = temp;
}
CNode* CNode::getNext()const
{
	return this->next;
}
