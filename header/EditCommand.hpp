#ifndef _EDIT_COMMAND_HPP_
#define _EDIT_COMMAND_HPP_

#include "Note.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <ctime>
using namespace std;
class Note;

class EditCommand {
    protected:
        Note* invoker;
    public:
        EditCommand() { invoker = nullptr;  };
        virtual void edit(string) = 0;
        virtual void unedit(string) = 0;
};

#endif
