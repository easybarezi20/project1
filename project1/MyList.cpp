#include "MyList.h"
#include <iostream>

MyList::MyList() : first(nullptr), count(0) {}

void MyList::insertFront(int newData)
{
	Node *newNode = new Node(newData, first);
	first = newNode;
	count++;
}

void MyList::insertBack(int newData)
{
	Node* current = first;
	while (current->getNext() != nullptr)
	{
		current = current->getNext();
	}
	Node* newNode = new Node(newData, nullptr);
	current->setNext(newNode);
	count++;
}

void MyList::print()
{
	Node* current = first;
	if (current == nullptr) std::cout << "List is empty!\n";

	while (current != nullptr)
	{
		std::cout << current->getData() << std::endl;
		current = current->getNext();
	}
}

void MyList::clearList()
{
	Node* current = first;
	std::cout << "Clearing List!\n";
	while (current != nullptr)
	{
		Node* temp = current;
		current = current->getNext();
		std::cout << "Node: " << temp->getData() << "... Deleted\n";
		delete temp;
	}
	first = nullptr;
	count = 0;
	std::cout << "list cleared!\n";
}

void MyList::insertAtTarget(int newData, int target)
{
	Node* current = first;
	while (current->getData() != target) current = current->getNext();

	if (current == nullptr)
	{
		Node* newNode = new Node(newData, nullptr);
		current->setNext(newNode);
		count++;
	}
	else
	{
		Node* newNode = new Node(newData, current->getNext());
		current->setNext(newNode);
		count++;
	}
}

MyList::~MyList()
{
	clearList();
}