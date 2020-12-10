#ifndef __DISPLAY_STRAT_HPP__
#define __DISPLAY_STRAT_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "NotebookEntry.hpp"
using namespace std;

class NotebookEntry;

class DisplayStrat {
	public:
	DisplayStrat() {};
	virtual void display(NotebookEntry* ) = 0;
};

#endif
