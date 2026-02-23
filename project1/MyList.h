#ifndef MYLIST_H
#define MYLIST_H

#include "Node.h"

class MyList
{
public:
	MyList();
	void insertFront(int);
	void print();
	void clearList();
	void insertBack(int);
	void insertAtTarget(int, int);
	~MyList();
private:
	Node* first;
	int count;
};


#endif
