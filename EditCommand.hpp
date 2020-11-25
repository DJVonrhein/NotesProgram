//#include whatever note is called
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <ctime>

class EditCommand : public Note {
    protected:
        Note* invoker;
    public:
        EditCommand() : invoker(nullptr) { };
        EditCommand(Note* invoker) : invoker(invoker) { };
        virtual void edit() = 0;
        virtual void unedit() = 0;
};
