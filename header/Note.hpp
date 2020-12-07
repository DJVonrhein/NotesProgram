#ifndef __NOTE_HPP__
#define __NOTE_HPP__

#include <iostream>
#include <vector>
#include <list>
#include <string>

#include "NotebookEntry.hpp"

using namespace std;

class DisplayStrat;
class EditCommand;

class Note : public NotebookEntry {
	public:
	Note(string name) {}
	void edit();
	void revert();
	void display();

	private:
	string text;
	DisplayStrat* strat;
	EditCommand* comm;
};

#endif
