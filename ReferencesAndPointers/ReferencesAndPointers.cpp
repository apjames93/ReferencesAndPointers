// ReferencesAndPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val;
int& valRef = val;

void printvals() {

	std::cout << "values: " << std::endl;
	std::cout << "val: " << val << " val2: " << val2 << " valPtr: " << *valPtr << " valRef: " << valRef << std::endl;
	std::cout << "Address: " << std::endl;
	std::cout << "val: " << &val << " val2: " << &val2 << " valPtr: " << valPtr << " valRef: " << &valRef << std::endl;

}

int main()
{

	printvals();
	valPtr = &val2;
	printvals();
	*valPtr = 3;
	printvals();
	valRef = 4; 
	printvals();

    return 0;
}

