#ifndef _TEXT_EDIT_COMMAND_HPP_
#define _TEXT_EDIT_COMMAND_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

#include "EditCommand.hpp"

class TextEditCommand : public EditCommand {
    private:
        bool can_revert;

    public:
	TextEditCommand() {can_revert = false; };

	virtual void edit(NotebookEntry* n) {
	    string title = n->get_title();
	    string command = "cd Notefiles/ && cp " + title + ".txt state" + title + ".txt && vim " + title + ".txt";	
	    int status = system(command.c_str());
	    this->can_revert = true;
	}

	virtual void unedit(NotebookEntry* n) {
	    if(this->can_revert == false){
		cout << "\nYou have to edit before you can revert!\n";
		return;
	    }
	    string title = n->get_title();
	    string command = "cd Notefiles/ && rm " + title + ".txt && mv state" + title + ".txt " + title + ".txt";
	    int status = system(command.c_str());
	    this->can_revert = false; 
	}
    
};

#endif
