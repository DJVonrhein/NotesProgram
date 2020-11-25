#ifndef NOTEBOOK_HPP_
#define NOTEBOOK_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Note.hpp"

class Notebook {
	public:
	Notebook(string title) {}
	void addNote(Note* );
	void removeNote(Note* );

	private:
	vector<NotebookEntry*> v;
};


#endif
