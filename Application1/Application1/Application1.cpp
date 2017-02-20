// Application1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FileUtils.h"
#include "FolderUtils.h"
#include "RegistryUtils.h"
#include "ResourceUtils.h"

#include <iostream>

void titleMenu() {
	int choice;
	std::cout << 1 << " " <<"File options" << "\n";
	std::cout << 2 << " " <<"Folder options" << "\n";
	std::cout << 3 << " " <<"Registry options" << "\n";
	std::cout << 4 << " " <<"Resource options" << "\n";
	std::cout << 5 << " " <<"Exit" << "\n";
	std::cout << "Please select a choice: ";
	std::cin >> choice;
	selectFunction(choice);
}

void selectFunction(int choice) {
	switch (choice) {
	case 1:
		break;
	case 2:
		std::cout << 2;
	}
	
	
}


int main()
{
	titleMenu();
    return 0;
}

