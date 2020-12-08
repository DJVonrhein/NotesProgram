#include "Note.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <ctime>

class EditCommand {
    protected:
        Note* invoker;
    public:
        EditCommand() { invoker = nullptr;  };
        virtual void edit() = 0;
        virtual void unedit() = 0;
};
