// Array to Linked List - linkedListNode.cpp
// Jeremy Ronquillo - j_ronquillo@u.pacific.edu
// There are no errors in this file.

#include "linkedListNode.h"

linkedListNode::linkedListNode(int value_param) {
	value = value_param;
}

int linkedListNode::getValue() {
	return value;
}

void linkedListNode::setNext(linkedListNode* next_param) {
	next = next_param;
}

linkedListNode* linkedListNode::getNext() {
	return next;
}