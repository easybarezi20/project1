/*
	Barezi, Morales

	2/23/2026
	cs250

	Singly linked node practice
*/
#include <iostream>
#include "MyList.h"

using namespace std;

int main()
{

	MyList listOne;
	
	listOne.insertFront(20);
	listOne.insertFront(10);
	listOne.insertFront(5);
	listOne.insertFront(0);

	listOne.insertBack(30);

	listOne.print();

	listOne.clearList();

	cout << endl;
	system("Pause");
	return 0;
}