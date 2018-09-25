// Array to Linked List - linkedListNode.h
// Jeremy Ronquillo - j_ronquillo@u.pacific.edu
// There are no errors in this file.

#pragma once
#include <iostream>
using namespace std;

#ifndef linkedListNode

class linkedListNode {
private:
	int value;
	linkedListNode* next = NULL;

public:
	linkedListNode(int value);
	void setNext(linkedListNode* next);
	int getValue();
	linkedListNode* getNext();
};

#endif // !linkedListNode
