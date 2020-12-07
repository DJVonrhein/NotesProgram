#ifndef __NOTEBOOK_HPP__
#define __NOTEBOOK_HPP__

#include <iostream>
#include <string>
#include <vector>
#include "NotebookEntry.hpp"

using namespace std;

class Notebook : public NotebookEntry{
	public:
	Notebook(string title) {};
	void addNote(NotebookEntry* );
	void removeNote(NotebookEntry* );

	private:
	vector<NotebookEntry*> v;
};


#endif
