// Array to Linked List - main.cpp
// Jeremy Ronquillo - j_ronquillo@u.pacific.edu
// A simple program that turns an array of integers into a linked list of integers.
// However, there is 1 error in this file. Can you find it?

#include <iostream>
#include "linkedListNode.h"
using namespace std;

// Initialize our functions here
linkedListNode* arrayToLinkedList(int* arr, int length);                    // Function that turns an array into a linked list.
void addLinkedListItemToRear(linkedListNode* list, linkedListNode* item);   // Helper function that appends a given item to the end of a given linked list.
void printLinkedList(linkedListNode* list);                                 // Prints out the given linked list.
void printArray(int* arr, int length);                                      // Prints out the given array.
bool compareArrayAndLinkedList(linkedListNode* list, int* arr, int length); // Compares the contents of the given array and given linked list.

// Entry point of program.
int main() {
    // initializing variables
	int RANDOM_SEED = 13;
	int ARRAY_LENGTH = 5;
	bool result;
	linkedListNode* list;
    int returnCode = 0;
	srand(RANDOM_SEED);

	cout << "LETTUCE make a linked list from an array!\n\n";

    int arr[5] = {12,24,36,48,60};

	list = arrayToLinkedList(arr, ARRAY_LENGTH);    // Convert array to linked list.

	cout << "ORANGE you glad we're done? Let's check out the results:\n\n";
	printLinkedList(list);                          // Prints contents of linked list.

	cout << "Let's SQUASH potential bugs by printing out our original array:\n\n";
	printArray(arr, ARRAY_LENGTH);                  // Prints contents of array.

	cout << "Checking if the contents of the array and linked list are the same...\n";
	result = compareArrayAndLinkedList(list, arr, ARRAY_LENGTH);    // Compares contents of array and linked list.
	cout << endl;

	if (result) {
		cout << "The array and linked list are equal! Congrats!\n\n";
        returnCode = 0;
	}
	else {
		cout << "***************************************************\n";
		cout << "*** ERROR: Array and linked list are NOT equal. ***\n";
		cout << "***************************************************\n\n";
        returnCode = 1;
	}
    system("pause");
    return returnCode;
}

// Function that turns an array into a linked list.
linkedListNode* arrayToLinkedList(int* arr, int length) {
	cout << "-> arrayToLinkedList()\n";

	linkedListNode* list = NULL;
	for (int i = 0; i < length; i++) {
		if (i == 0) {
			list = new linkedListNode(arr[i]);                      // Initialize first item of linked list.
			
		}
		else {
			linkedListNode* newItem = new linkedListNode(arr[i]);   // Initialize next item of linked list.
			cout << "\t";
			addLinkedListItemToRear(list, newItem);                 // Add item to the end of our list.
			cout << "\t";
		}
		cout << "Added list item " << i << ".\n\n";
	}
	return list;
}

// Helper function that appends a given item to the end of a given linked list.
void addLinkedListItemToRear(linkedListNode* list, linkedListNode* item) {
	cout << "-> addLinkedListItem()\n";

	linkedListNode* copy_of_list = list;        // Create a copy of the list so actions are not destructive.

	while (copy_of_list != NULL) {              // Looping until we get to end of list.
		copy_of_list = copy_of_list->getNext(); // Traverse to the next item in the list.
	}

    copy_of_list = item;                        // Set the end of our list to be our new item.
}

// Prints out the given linked list.
void printLinkedList(linkedListNode* list) {
	cout << "-> printLinkedList()\n";

	linkedListNode* copy_of_list = list;        // Create a copy of the list so actions are not destructive.
	
	for (int i = 0; copy_of_list != NULL; i++) {
		cout << "List Item " << i << ": " << copy_of_list->getValue() << endl;
		copy_of_list = copy_of_list->getNext(); // Traverse to the next item in the list.
	}
	cout << endl;

}

// Prints out the given array.
void printArray(int* arr, int length) {
	cout << "-> printArray()\n";

	for (int i = 0; i < length; i++) {
		cout << "arr[" << i << "]: " << arr[i] << endl;
	}
	cout << endl;
}

// Compares the contents of the given array and given linked list.
bool compareArrayAndLinkedList(linkedListNode* list, int* arr, int arr_length) {
	cout << "-> compareArrayAndLinkedList()\n";
	linkedListNode* copy_of_list = list;            // Create a copy of the list so actions are not destructive.
	int i = 0;

	for (i = 0; copy_of_list != NULL; i++) {
		if (copy_of_list->getValue() != arr[i]) {   // Comparing the value obtained from list with array index i.
			return false;
		}
		copy_of_list = copy_of_list->getNext();     // Traverse to the next item in the list.
	}
	return (i == arr_length);                       // If list is different length than array, return false
                                                    // else return true.
}
