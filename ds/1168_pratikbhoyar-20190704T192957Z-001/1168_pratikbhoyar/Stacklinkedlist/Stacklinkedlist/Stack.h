
#include<iostream>
#include"CNode.h"
using namespace std;
class Stack
{
private:
	CNode *head;

public:
	Stack();
	   bool Push(int data);
	   bool Pop();
	   void display();

};