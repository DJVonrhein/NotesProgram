#ifndef _EDIT_COMMAND_HPP_
#define _EDIT_COMMAND_HPP_

#include "NotebookEntry.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <ctime>
using namespace std;
class NotebookEntry;

class EditCommand {
    
    public:
        EditCommand() {  };
        virtual void edit(NotebookEntry*) = 0;
        virtual void unedit(NotebookEntry*) = 0;
};

#endif
