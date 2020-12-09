#ifndef __DISPLAY_STRAT_HPP__
#define __DISPLAY_STRAT_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Note.hpp"
using namespace std;

class DisplayStrat {
	public:
	virtual void display(string title) = 0;
};

#endif
