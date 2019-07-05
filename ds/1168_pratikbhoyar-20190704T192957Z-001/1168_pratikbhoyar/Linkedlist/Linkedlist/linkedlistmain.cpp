#include"linkedList.h"
#include <iostream>
using namespace std;
#include<conio.h>

int main()
{
	LinkedList list;
	int choice, data, position, val;
	do
	{
		cout << "\n::Operations on Singly LinkedList::\n---  \n1.Insert by Value\n2.Insert by Position\n3.Remove from position \n4.Display \n5.Remove by value\n6.EXIT\n";
		cout << "\nEnter the choice  :";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nEnter the data   :";
			cin >> data;
			list.insert(data);

			break;
		case 2:
			cout << "\nEnter the data   :";
			cin >> data;
			cout << "\nEnter the position  :";
			cin >> position;
			list.insertNode(data, position);
			break;
		case 3:
			cout << "\nEnter the position..";
			cin >> position;
			list.removefromposition(position);

			break;
		case 4:
			cout << "\n Values in the List are::";

			list.Display();
			cout << "\n";
			break;
        case 5:
			cout << "Enter value to delete : ";
			cin >> val;
			list.removeByValue(val); break;
		case 6:exit(0);
		default:cout << "Wrong input....";
		}
	} while (choice != 6);
	_getch();
	return 0;
}
