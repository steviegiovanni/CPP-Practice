// CPP-Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Animal.h"
#include "ListStruct.h"

void AnimalDriver() {
	Animal animal;
	Cat cat;
	Dog dog(6);
}

void ListStructDriver() {
	ListElement * list = new ListElement;
	list->value = 4;
	Insert(&list, 5);
	PrintList(list);
	delete list;
}

int main()
{
	std::cout << "Hello world" << std::endl;

	// AnimalDriver();
	ListStructDriver();

    return 0;
}

