// CPP-Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Animal.h"

void AnimalDriver() {
	Animal animal;
	Cat cat;
	Dog dog(6);
}

int main()
{
	std::cout << "Hello world" << std::endl;

	AnimalDriver();

    return 0;
}

