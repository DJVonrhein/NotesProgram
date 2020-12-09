#ifndef __NOTEBOOK_HPP__
#define __NOTEBOOK_HPP__

#include <iostream>
#include <string>
#include <vector>
#include "NotebookEntry.hpp"

using namespace std;
class NotebookEntry;
class Note;
class Notebook : public NotebookEntry{
	public:
	Notebook(string title) {};
	void addNote(NotebookEntry* );
	void removeNote(NotebookEntry* );
	Note* find(string header);

	private:
	vector<NotebookEntry*> v;
};


#endif
