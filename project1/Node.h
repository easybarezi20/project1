#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int newData, Node *newNext) : data(newData), next(newNext) {}

	Node* getNext() const { return next; }
	int getData() const { return data; }
	void setNext(Node* newNext) { next = newNext; }
	void setData(int newData) { data = newData; }
	~Node() {}

private:
	int data;
	Node* next;
};

#endif 

