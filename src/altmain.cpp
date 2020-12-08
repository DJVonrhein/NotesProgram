#include "../header/Notebook.hpp"
#include "../header/Note.hpp"
#include "../header/EditCommand.hpp"
#include "../header/TextEditCommand.hpp"

#include <iostream>
#include <string>

using namespace std;

void print_menu();

int main() {
	std::string notebook_title = "";
	int menu_choice = 0;
	Notebook* dummy;

	std::cout << "Welcome to TerminNotes v1.0" << std::endl;
	print_menu();
	std::cout << "Choice: ";

	cin >> menu_choice;
	while(menu_choice < 1 || menu_choice > 3) {
	    std::cout << "INVALID INPUT" << std::endl;
	    print_menu();
	    std::cout << "Choice: ";
	    std::cin >> menu_choice;
	}

	if (menu_choice == 1) {
	    std::cout << "Enter Notebook title, followed by '.txt': ";
	    std::cin >> notebook_title;
	    //check title, add '.txt' if it wasn't input
	}
	//create new notebook with notebook_title
	dummy = new Notebook(notebook_title);
	//stuff after
	
	return 0;
}

void print_menu() {
	std::cout << "Choose an option:" << std::endl;
	std::cout << "1. Create New Notebook" << std::endl;
	std::cout << "2. Display Note" << std::endl;
	std::cout << "3. Edit Note" << std::endl;
	return;
}
