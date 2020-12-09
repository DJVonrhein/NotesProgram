#ifndef __NOTE_HPP__
#define __NOTE_HPP__

#include <iostream>
#include <vector>
#include <list>
#include <string>

#include "NotebookEntry.hpp"
#include "Notebook.hpp"
using namespace std;

class DisplayStrat;
class EditCommand;

class Note : public NotebookEntry {
        public:
        //string get_title();
        Note(string name) {
                this->title = name;
                this->strat = nullptr;
        }
        virtual void edit(string);
        virtual void revert(string);
        virtual void display(string);

        private:
        DisplayStrat* strat;
        EditCommand* comm;
};

#endif
