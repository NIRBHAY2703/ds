#include<iostream>
#include<conio.h>
#include"Stack.h"

int main()
{
	Stack s;
	s.Push(10);
	s.Push(20);
	s.Push(30);
	s.Push(40);
	s.Push(50);
	s.display();

	s.Pop();
	s.display();
	s.Pop();
	s.display();
	s.Push(59);
	s.display();
	_getch();
	return 0;

}