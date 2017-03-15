//#include "FileUtils.h"
//#include "FolderUtils.h"
//#include "RegistryUtils.h"
#include "ResourceUtils.h"

#include <iostream>
#include <Windows.h>

void selectFunction(int choice) {
	switch (choice) {
	case 1:
		std::cout << "File Options" << "\n";
		break;
	case 2:
		std::cout << "Folder Options" << "\n";
		break;
	case 3:
		std::cout << "Registry Options" << "\n";
		break;
	case 4:
		//system("systeminfo > c:\tmp.txt");
		std::cout << "Resource Options" << "\n";
		std::cout << "Total Ram: " << get_ram_total(get_status()) << "\n";
		std::cout << "Free Ram: " << get_ram_free(get_status()) << "\n";
		std::cout << "Used Ram: "<< get_ram_used(get_status()) << "\n";
		break;
	case 5:
		std::cout << "Exiting Now" << "\n";
		//exit(0);
		break;
	}
}

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

int main()
{
	titleMenu();
    return 0;
}