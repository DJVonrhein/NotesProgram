#ifndef __DISPLAY_NO_WORD_COUNT_HPP__
#define __DISPLAY_NO_WORD_COUNT_HPP__
#include "DisplayStrat.hpp"
#include "NotebookEntry.hpp"
#include <iostream>
#include <string>
#include "Note.hpp"
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

class NotebookEntry;
class DisplayStrat;

class DisplayNoWordCount : public DisplayStrat {
    public:
	DisplayNoWordCount();
        virtual void display(NotebookEntry* );
};

#endif
