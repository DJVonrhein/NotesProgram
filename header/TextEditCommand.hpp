#ifndef _TEXT_EDIT_COMMAND_HPP_
#define _TEXT_EDIT_COMMAND_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

#include "EditCommand.hpp"

class TextEditCommand : public EditCommand {
    public:
	TextEditCommand() { };

	TextEditCommand(Note* invoker) { this->invoker = invoker; };

	virtual void edit() {
	    std::cout << "FIXME: implement edit function" << std::endl;
	    return;
	}

	virtual void unedit() {
	    std::cout << "FIXME: implement unedit function" << std::endl;
	    return;
	}
};

#endif
