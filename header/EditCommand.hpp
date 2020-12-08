#include "Note.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <ctime>

class Note;

class EditCommand {
    protected:
        Note* invoker;
    public:
        //EditCommand() { invoker = nullptr;  };
        EditCommand(Note* invoker) { this->invoker = invoker;  };
        virtual void edit() = 0;
        virtual void unedit() = 0;
};
