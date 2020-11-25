#ifndef NOTE_HPP_
#define NOTE_HPP_

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "Notebook.hpp"

using namespace std;

class Note {
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
