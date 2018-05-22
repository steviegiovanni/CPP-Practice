#pragma once
#include <iostream>

typedef struct ListElement {
	int value;
	ListElement * next = NULL;
}ListElement;

void Insert(ListElement ** pointerToHead, int value) { // input paramater is a pointerToHead (which is a pointer to a pointer to a ListElement)
	ListElement * newElement = new ListElement;
	newElement->value = value;
	newElement->next = *pointerToHead; // set next to a pointer to a ListElement (dereference the pointerToHead)
	*pointerToHead = newElement; // set the dereference of pointerToHead (meaning the head itself) to newElement
}

void PrintList(ListElement * head) {
	ListElement * current = head;
	while (current) {
		std::cout << current->value << " ";
		current = current->next;
	}
}